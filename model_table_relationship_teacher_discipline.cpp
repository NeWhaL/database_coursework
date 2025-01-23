#include "model_table_relationship_teacher_discipline.h"

ModelTableRelationshipTeacherDiscipline::ModelTableRelationshipTeacherDiscipline() {
    QSqlQuery query;
    query.prepare("select rtd.*, t.surname, t.name, t.patronymic, t.department, t.post, t.academic_degree, t.gender "
                  "from relationship_teacher_discipline rtd "
                  "join teacher t on t.id = rtd.teacher_id");
    select_query(query);
}

void ModelTableRelationshipTeacherDiscipline::query_bind_values(QSqlQuery& query, const QVector<QVariant>& row) {
    query.bindValue(":teacher_id", row[0]);
    query.bindValue(":discipline_name", row[1]);
}

bool ModelTableRelationshipTeacherDiscipline::insert(QVector<QVariant>& new_row) {
    QSqlQuery query;
    if (!general_insert(
            query,
            QString("select insert_relationship_teacher_discipline(:teacher_id, :discipline_name);"),
            new_row
        )) {
        return false;
    }
    query.next();
    QVariant id {query.value(0).toInt()};
    new_row.push_front(id);
    return true;
}

bool ModelTableRelationshipTeacherDiscipline::remove(QVariant primary_key_name) {
    return general_remove(
        "delete from relationship_teacher_discipline where id = :primary_key;",
        primary_key_name
    );
}

bool ModelTableRelationshipTeacherDiscipline::update(QVector<QVariant>& row_to_change, QString old_primary_key) {
    return general_update(
        "select update_relationship_teacher_discipline(:primary_key, :teacher_id, :discipline_name);",
        row_to_change,
        old_primary_key
    );
}

void ModelTableRelationshipTeacherDiscipline::modal_window_update(QWidget* parent, QMap<QString, QVariant>& row_to_change, int row_index) {
    ::modal_window_update<DialogRelationshipTeacherDiscipline>(parent, row_to_change, row_index, "id", this);
}

void ModelTableRelationshipTeacherDiscipline::modal_window_add(QWidget* parent) {
    ::modal_window_add<DialogRelationshipTeacherDiscipline>(parent, this);
}
