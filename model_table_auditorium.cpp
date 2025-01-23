#include "model_table_auditorium.h"

ModelTableAuditorium::ModelTableAuditorium() {
    QSqlQuery query;
    query.prepare("select * from auditorium");
    select_query(query);
}

void ModelTableAuditorium::query_bind_values(QSqlQuery& query, const QVector<QVariant>& row) {
    query.bindValue(":building_number", row[0]);
    query.bindValue(":audience_name", row[1]);
}

bool ModelTableAuditorium::insert(QVector<QVariant>& new_row) {
    QSqlQuery query;
    if (!general_insert(query, "select insert_auditorium(:building_number, :audience_name);", new_row))
        return false;
    query.next();
    QVariant auditorium_id {query.value(0).toInt()};
    new_row.push_front(auditorium_id);
    return true;
}

bool ModelTableAuditorium::remove(QVariant primary_key_name) {
    return general_remove("delete from auditorium where id = :primary_key", primary_key_name);
}

bool ModelTableAuditorium::update(QVector<QVariant>& row_to_change, QString old_primary_key) {
    return general_update("select update_auditorium(:primary_key, "
                          ":building_number, :audience_name)", row_to_change, old_primary_key);
}

void ModelTableAuditorium::modal_window_update(QWidget* parent, QMap<QString, QVariant>& row_to_change, int row_index) {
    ::modal_window_update<DialogAuditorium>(parent, row_to_change, row_index, "id", this);
}

void ModelTableAuditorium::modal_window_add(QWidget* parent) {
    ::modal_window_add<DialogAuditorium>(parent, this);
}
