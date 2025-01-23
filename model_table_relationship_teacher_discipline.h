#ifndef MODEL_TABLE_RELATIONSHIP_TEACHER_DISCIPLINE_H
#define MODEL_TABLE_RELATIONSHIP_TEACHER_DISCIPLINE_H

#include "atablemodel.h"

class ModelTableRelationshipTeacherDiscipline : public ATableModel {
private:
    void query_bind_values(QSqlQuery& query, const QVector<QVariant>& row) override;

public:
    ModelTableRelationshipTeacherDiscipline();
    bool insert(QVector<QVariant>& new_row) override;
    bool remove(QVariant primary_key_name) override;
    bool update(QVector<QVariant>& row_to_change, QString old_primary_key) override;
    void modal_window_update(QWidget* parent, QMap<QString, QVariant>& row_to_change, int row_index) override;
    void modal_window_add(QWidget* parent) override;
};

#endif // MODEL_TABLE_RELATIONSHIP_TEACHER_DISCIPLINE_H
