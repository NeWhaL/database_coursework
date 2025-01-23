#include "model_table_student.h"

ModelTableStudent::ModelTableStudent() {
    QSqlQuery query;
    query.prepare("select * from student");
    select_query(query);
}

void ModelTableStudent::query_bind_values(QSqlQuery& query, const QVector<QVariant>& row) {
    query.bindValue(":name", row[0]);
    query.bindValue(":surname", row[1]);
    query.bindValue(":patronymic", row[2]);
    query.bindValue(":group_name", row[3]);
    query.bindValue(":gender", row[4]);
}

bool ModelTableStudent::insert(QVector<QVariant>& new_row) {
    QSqlQuery query;
    if (!general_insert(query,
            QString("select insert_student(:name, :surname, :patronymic, :group_name, :gender);"),
            new_row)) {
        return false;
    }
    query.next();
    QVariant student_id {query.value(0).toInt()};
    new_row.push_front(student_id);
    return true;
}

bool ModelTableStudent::remove(QVariant primary_key_name) {
    return general_remove("delete from student where id = :primary_key", primary_key_name);
}

bool ModelTableStudent::update(QVector<QVariant>& row_to_change, QString old_primary_key) {
    return general_update("select update_student(:primary_key, :name, "
                          ":surname, :patronymic, :group_name, :gender);" , row_to_change, old_primary_key);
}

void ModelTableStudent::modal_window_update(QWidget* parent, QMap<QString, QVariant>& row_to_change, int row_index) {
    ::modal_window_update<DialogStudent>(parent, row_to_change, row_index, "id", this);
}

void ModelTableStudent::modal_window_add(QWidget* parent) {
    ::modal_window_add<DialogStudent>(parent, this);
}
