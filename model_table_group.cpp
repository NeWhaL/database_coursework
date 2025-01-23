#include "model_table_group.h"

ModelTableGroup::ModelTableGroup() {
    QSqlQuery query;
    query.prepare("select * from \"group\"");
    select_query(query);
}

void ModelTableGroup::query_bind_values(QSqlQuery& query, const QVector<QVariant>& row) {
    query.bindValue(":name", row[0]);
}

bool ModelTableGroup::insert(QVector<QVariant>& new_row) {
    QSqlQuery query;
    return general_insert(query, "select insert_group(:name);", new_row);
}

bool ModelTableGroup::remove(QVariant primary_key_name) {
    return general_remove("delete from \"group\" where name = :primary_key", primary_key_name);
}

bool ModelTableGroup::update(QVector<QVariant>& row_to_change, QString old_primary_key) {
    return general_update("select update_group(:primary_key, :name)", row_to_change, old_primary_key);
}

void ModelTableGroup::modal_window_update(QWidget* parent, QMap<QString, QVariant>& row_to_change, int row_index) {
    ::modal_window_update<DialogGroup>(parent, row_to_change, row_index, "name", this);
}

void ModelTableGroup::modal_window_add(QWidget* parent) {
    ::modal_window_add<DialogGroup>(parent, this);
}
