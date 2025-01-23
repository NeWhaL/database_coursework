#include "model_table_relationship_stream_group.h"

ModelTableRelationshipStreamGroup::ModelTableRelationshipStreamGroup() {
    QSqlQuery query;
    query.prepare("select * from streams_relationship_and_groups;");
    select_query(query);
}

void ModelTableRelationshipStreamGroup::query_bind_values(QSqlQuery& query, const QVector<QVariant>& row) {
    query.bindValue(":stream_name", row[0]);
    query.bindValue(":group_name", row[1]);
}

bool ModelTableRelationshipStreamGroup::insert(QVector<QVariant>& new_row) {
    QSqlQuery query;
    if (!general_insert(query,
            QString("select insert_relationship_stream_group(:stream_name, :group_name);"),
            new_row)) {
        return false;
    }
    query.next();
    QVariant id {query.value(0).toInt()};
    new_row.push_front(id);
    return true;
}

bool ModelTableRelationshipStreamGroup::remove(QVariant primary_key_name) {
    return general_remove("delete from streams_relationship_and_groups where id = :primary_key;", primary_key_name);
}

bool ModelTableRelationshipStreamGroup::update(QVector<QVariant>& row_to_change, QString old_primary_key) {
    return general_update("select update_relationship_stream_group(:primary_key, :stream_name, :group_name);",
                          row_to_change, old_primary_key);
}

void ModelTableRelationshipStreamGroup::modal_window_update(QWidget* parent, QMap<QString, QVariant>& row_to_change, int row_index) {
    ::modal_window_update<DialogRelationshipStremGroup>(parent, row_to_change, row_index, "id", this);
}

void ModelTableRelationshipStreamGroup::modal_window_add(QWidget* parent) {
    ::modal_window_add<DialogRelationshipStremGroup>(parent, this);
}
