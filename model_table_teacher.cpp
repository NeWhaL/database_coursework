#include "model_table_teacher.h"

ModelTableTeacher::ModelTableTeacher() {
    QSqlQuery query;
    query.prepare("select * from teacher");
    select_query(query);
}

bool ModelTableTeacher::insert(QVector<QVariant>& new_row) {
    QSqlQuery query;
    if (!general_insert(query,
            "select insert_teacher(:name, "
            ":surname, :patronymic, :department, "
            ":post, :academic_degree, :gender);",
            new_row)) {
        return false;
    }
    query.next();
    QVariant teacher_id {query.value(0).toInt()};
    new_row.push_front(teacher_id);
    return true;
}

bool ModelTableTeacher::update(QVector<QVariant>& row, QString old_primary_key) {
    return general_update("select update_teacher(:primary_key, :name, "
      ":surname, :patronymic, :department, "
      ":post, :academic_degree, :gender)", row, old_primary_key);
}

void ModelTableTeacher::query_bind_values(QSqlQuery& query, const QVector<QVariant>& row) {
    query.bindValue(":name", row[0]);
    query.bindValue(":surname", row[1]);
    query.bindValue(":patronymic", row[2]);
    query.bindValue(":department", row[3]);
    query.bindValue(":post", row[4]);
    query.bindValue(":academic_degree", row[5]);
    query.bindValue(":gender", row[6]);
}

bool ModelTableTeacher::remove(QVariant primary_key) {
    return general_remove("delete from teacher where id = :primary_key", primary_key);
}

void ModelTableTeacher::modal_window_update(QWidget* parent, QMap<QString, QVariant>& row_to_change, int row_index) {
    ::modal_window_update<DialogTeacher>(parent, row_to_change, row_index, "id", this);
}

void ModelTableTeacher::modal_window_add(QWidget* parent) {
    ::modal_window_add<DialogTeacher>(parent, this);
}
