#include "model_table_lecture.h"

ModelTableLecture::ModelTableLecture() {
    QSqlQuery query;
    query.prepare("select l.id, l.relationship_teacher_discipline, l.auditorium_id, rtd.teacher_id, "
                  "rtd.discipline_name, l.stream_name, l.date_start, l.date_end, "
                  "a.building_number, a.audience_name, t.surname, t.name, t.patronymic from lecture l "
                  "join relationship_teacher_discipline rtd on l.relationship_teacher_discipline = rtd.id "
                  "join teacher t on t.id = rtd.teacher_id "
                  "join auditorium a on a.id = l.auditorium_id;");
    select_query(query);
}

void ModelTableLecture::query_bind_values(QSqlQuery& query, const QVector<QVariant>& row) {
    query.bindValue(":auditorium_id", row[0]);
    query.bindValue(":teacher_id", row[1]);
    query.bindValue(":discipline_name", row[2]);
    query.bindValue(":stream_name", row[3]);
    query.bindValue(":date_start", row[4]);
    query.bindValue(":date_end", row[5]);
}

bool ModelTableLecture::insert(QVector<QVariant>& new_row) {
    QSqlQuery query;
    if (!general_insert(query,
            QString("select (insert_lecture(:auditorium_id, :teacher_id, :discipline_name, "
                    ":stream_name, :date_start, :date_end)).*;"),
            new_row)) {
        return false;
    }
    query.next();
    new_row.push_front(query.value("relationship_id"));
    new_row.push_front(query.value("primary_key"));
    return true;

}

bool ModelTableLecture::remove(QVariant primary_key_name) {
    return general_remove("delete from lecture where id = :primary_key;", primary_key_name);
}

bool ModelTableLecture::update(QVector<QVariant>& row_to_change, QString old_primary_key) {
    // return general_update("select update_lecture(:primary_key, :auditorium_id, :teacher_id, :discipline_name, "
    //                       ":stream_name, :date_start, :date_end);",
    //                       row_to_change, old_primary_key);
    if (row_to_change.isEmpty())
        return false;
    QSqlQuery query;
    query.prepare("select update_lecture(:primary_key, :auditorium_id, :teacher_id, :discipline_name, "
                  ":stream_name, :date_start, :date_end);)");
    query.bindValue(":primary_key", old_primary_key);
    query_bind_values(query, row_to_change);
    if (!query.exec()) {
        QMessageBox::critical(nullptr, "Таблица не обновилась", "Не удалось обновить данные в таблице: " + query.lastError().text());
        return false;
    }
    if (query.next())
        row_to_change.insert(row_to_change.begin(), query.value(0));
    return true;
}

void ModelTableLecture::modal_window_update(QWidget* parent, QMap<QString, QVariant>& row_to_change, int row_index) {
    ::modal_window_update<DialogLecture>(parent, row_to_change, row_index, "id", this);
}

void ModelTableLecture::modal_window_add(QWidget* parent) {
    ::modal_window_add<DialogLecture>(parent, this);
}
