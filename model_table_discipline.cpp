#include "model_table_discipline.h"

ModelTableDiscipline::ModelTableDiscipline() {
    QSqlQuery query;
    query.prepare("select * from discipline");
    select_query(query);
}

bool ModelTableDiscipline::insert(QVector<QVariant>& new_row) {
    QSqlQuery query;
    return general_insert(query, "select insert_discipline(:name, :amount_hours, :cycle);", new_row);
}

bool ModelTableDiscipline::update(QVector<QVariant>& row, QString old_primary_key) {
    return general_update("select update_discipline(:primary_key, "
                          ":name, :amount_hours, :cycle)", row, old_primary_key);
}

void ModelTableDiscipline::query_bind_values(QSqlQuery& query, const QVector<QVariant>& row) {
    query.bindValue(":name", row[0]);
    query.bindValue(":amount_hours", row[1]);
    query.bindValue(":cycle", row[2]);
}

bool ModelTableDiscipline::remove(QVariant primary_key_name) {
    return general_remove("delete from discipline where name = :primary_key", primary_key_name);
}

void ModelTableDiscipline::modal_window_update(QWidget* parent, QMap<QString, QVariant>& row_to_change, int row_index) {
    ::modal_window_update<DialogDiscipline>(parent, row_to_change, row_index, "name", this);
}

void ModelTableDiscipline::modal_window_add(QWidget* parent) {
    ::modal_window_add<DialogDiscipline>(parent, this);
}
