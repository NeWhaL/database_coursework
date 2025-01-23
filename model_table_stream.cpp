#include "model_table_stream.h"

ModelTableStream::ModelTableStream() {
    QSqlQuery query;
    query.prepare("select * from stream");
    select_query(query);
}

void ModelTableStream::query_bind_values(QSqlQuery& query, const QVector<QVariant>& row) {
    query.bindValue(":name", row[0]);
}

bool ModelTableStream::insert(QVector<QVariant>& new_row) {
    QSqlQuery query;
    return general_insert(query, "select insert_stream(:name);", new_row);
}

bool ModelTableStream::remove(QVariant primary_key_name) {
    return general_remove("delete from stream where name = :primary_key", primary_key_name);
}

bool ModelTableStream::update(QVector<QVariant>& row_to_change, QString old_primary_key) {
    return general_update("select update_stream(:primary_key, :name)", row_to_change, old_primary_key);
}

void ModelTableStream::modal_window_update(QWidget* parent, QMap<QString, QVariant>& row_to_change, int row_index) {
    ::modal_window_update<DialogStream>(parent, row_to_change, row_index, "name", this);
}

void ModelTableStream::modal_window_add(QWidget* parent) {
    ::modal_window_add<DialogStream>(parent, this);
}
