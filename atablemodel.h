#ifndef ATABLEMODEL_H
#define ATABLEMODEL_H

#include <QAbstractTableModel>
#include <QComboBox>
#include "icrud.h"
#include "database_manager.h"
#include "dialog_discipline.h"
#include "dialog_teacher.h"
#include "dialog_student.h"
#include "dialog_group.h"
#include "dialog_stream.h"
#include "dialog_auditorium.h"
#include "dialog_relationship_stream_group.h"
#include "dialog_relationship_teacher_discipline.h"
#include "dialog_lecture.h"

class ATableModel;

template <typename DialogType>
void modal_window_add(QWidget* parent, ATableModel* table_model);

template <typename DialogType>
void modal_window_update(QWidget* parent, QMap<QString, QVariant> row_to_change, int row_index, ATableModel* table_model);



class ATableModel : public QAbstractTableModel, public Icrud {
    template <typename DialogType>
    friend void ::modal_window_add(QWidget* parent, ATableModel* table_model);

    template <typename DialogType>
    void modal_window_update(QWidget* parent, QVector<QVariant> row_to_change, int row_index, ATableModel* table_model);

protected:
    QStringList _column_names;
    QVector<QVector<QVariant>> _table;
    QVector<QVector<QVariant>> _filter_table;

    void select_query(QSqlQuery& query);
    virtual void query_bind_values(QSqlQuery& query, const QVector<QVariant>& row) = 0;

    bool general_insert(QSqlQuery& query, QString query_string, QVector<QVariant>& new_row);
    bool general_update(QString query_string, QVector<QVariant>& row, QVariant old_primary_key);
    bool general_remove(QString query_string, QVariant primary_key);
public:
    ATableModel(QObject* parent = nullptr);
    virtual ~ATableModel();
    void remove_row(int row_index);
    virtual void modal_window_update(QWidget* parent, QMap<QString, QVariant>& row_to_change, int row_index) = 0;
    virtual void modal_window_add(QWidget* parent) = 0;


    QModelIndex index(int row, int column,
                      const QModelIndex &parent = QModelIndex()) const override;

    int rowCount(const QModelIndex &parent = QModelIndex()) const override;
    int columnCount(const QModelIndex &parent = QModelIndex()) const override;

    QVariant data(const QModelIndex &index, int role = Qt::DisplayRole) const override;
    bool setData(const QModelIndex &index, const QVariant &value, int role = Qt::EditRole) override;

    void filter_data(const QString& column_name, const QString& sub_string);
    int get_column_index(const QString& column_name) const;

    QVariant headerData(int section, Qt::Orientation orientation,
                                int role = Qt::DisplayRole) const override;
    QStringList headersData();
};

template <typename DialogType>
void modal_window_add(QWidget* parent, ATableModel* table_model) {
    DialogType dialog(parent);
    if (dialog.exec() == QDialog::Rejected)
        return;
    QVector<QVariant> row = dialog.get_data();
    if (!table_model->insert(row))
        return;
    table_model->beginInsertRows(QModelIndex(), 0, 0);
    table_model->_filter_table.append(row);
    table_model->endInsertRows();
}

template <typename DialogType>
void modal_window_update(QWidget* parent,
                         QMap<QString, QVariant> row_to_change,
                         int row_index,
                         const QString& primary_key_name,
                         ATableModel* table_model) {
    DialogType dialog(parent, row_to_change);
    QString old_primary_key = row_to_change[primary_key_name].toString();
    if (dialog.exec() == QDialog::Rejected)
        return;
    QVector<QVariant> row = dialog.get_data();
    if (!table_model->update(row, old_primary_key))
        return;
    int inc {0};
    if (table_model->headerData(0, Qt::Horizontal).toString() == "id")
        inc = 1;
    for (int col {0}; col < row.size(); ++col)
        table_model->setData(table_model->index(row_index, col + inc), row[col]);
}

#endif // ATABLEMODEL_H
