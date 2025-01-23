#include "atablemodel.h"

ATableModel::ATableModel(QObject* parent)
: QAbstractTableModel(parent)
, Icrud() {}

ATableModel::~ATableModel() {}

bool ATableModel::general_insert(QSqlQuery& query, QString query_string, QVector<QVariant>& new_row) {
    if (new_row.isEmpty())
        return false;
    query.prepare(query_string);
    query_bind_values(query, new_row);
    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Ошибка вставки", query.lastError().text());
        return false;
    }
    return true;
}

bool ATableModel::general_update(QString query_string, QVector<QVariant>& row, QVariant old_primary_key) {
    if (row.isEmpty())
        return false;
    QSqlQuery query;
    query.prepare(query_string);
    query.bindValue(":primary_key", old_primary_key);
    query_bind_values(query, row);
    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Таблица не обновилась", "Не удалось обновить данные в таблице: " + query.lastError().text());
        return false;
    }
    return true;
}

bool ATableModel::general_remove(QString query_string, QVariant primary_key) {
    QSqlQuery query;
    query.prepare(query_string);
    query.bindValue(":primary_key", primary_key);
    if (!query.exec()) {
        QMessageBox::warning(nullptr, "Ошибка удаления",
                             "Не удалось удалить строку: " + query.lastError().text());
        return false;
    }
    return true;
}

void ATableModel::select_query(QSqlQuery& query) {
    if (!query.exec()) {
        QMessageBox::critical(nullptr,
                              "Ошибка запроса",
                              "Не удалось выполнить запрос");
        return;
    }
    QSqlRecord row = query.record();
    for (size_t i {0}; i < row.count(); ++i)
        _column_names.append(row.fieldName(i));
    while (query.next()) {
        QVector<QVariant> row;
        for (size_t col {0}; col < query.record().count(); ++col)
            row.append(query.value(col));
        _table.append(row);
    }
    _filter_table = _table;
}


void ATableModel::remove_row(int row_index) {
    beginRemoveRows(QModelIndex(), row_index, row_index);
    _table.removeAt(row_index);
    _filter_table.removeAt(row_index);
    endRemoveRows();
}

QModelIndex ATableModel::index(int row, int column, const QModelIndex &parent) const {
    // if (parent.isValid() || row < 0 || column < 0 || row >= _table.size() || column >= _table[row].size())
    if (parent.isValid() || row < 0 || column < 0 || row >= _filter_table.size() || column >= _filter_table[row].size())
        return QModelIndex();
    return createIndex(row, column);
}

int ATableModel::rowCount(const QModelIndex &parent) const {
    if (parent.isValid())
        return 0;
    // return _table.size();
    return _filter_table.size();
}

int ATableModel::columnCount(const QModelIndex &parent) const {
    if (parent.isValid())
        return 0;
    return _column_names.size();
}

QVariant ATableModel::data(const QModelIndex &index, int role) const {
    if (!index.isValid() || role != Qt::DisplayRole)
        return QVariant();
    // return _table[index.row()][index.column()];
    return _filter_table[index.row()][index.column()];
}

bool ATableModel::setData(const QModelIndex &index, const QVariant &value, int role) {
    if (!index.isValid() || role != Qt::EditRole)
        return false;
    _table[index.row()][index.column()] = value;
    _filter_table[index.row()][index.column()] = value;
    emit dataChanged(index, index);
    return true;
}

int ATableModel::get_column_index(const QString &column_name) const {
    return _column_names.indexOf(column_name);
}

void ATableModel::filter_data(const QString& column_name, const QString& sub_string) {
    if (column_name.isEmpty() || sub_string.isEmpty()) {
        _filter_table = _table;
    } else {
        int column_index = get_column_index(column_name);
        if (column_index == -1)
            return;
        QVector<QVector<QVariant>> filter_data;
        for (const auto &row : _table) {
            if (row[column_index].toString().contains(sub_string, Qt::CaseInsensitive))
                filter_data.append(row);
        }
        _filter_table = filter_data;
    }
    beginResetModel();
    endResetModel();
}

QVariant ATableModel::headerData(int section, Qt::Orientation orientation, int role) const {
    if (role == Qt::DisplayRole) {
        if (orientation == Qt::Horizontal && section >= 0 && section < _column_names.size())
            return _column_names[section];
        else if (orientation == Qt::Vertical)
            return section + 1;
    }
    return QVariant();
}

QStringList ATableModel::headersData() {
    return _column_names;
}
