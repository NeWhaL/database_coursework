#ifndef DIALOG_RELATIONSHIP_TEACHER_DISCIPLINE_H
#define DIALOG_RELATIONSHIP_TEACHER_DISCIPLINE_H

#include "atablemodel.h"

namespace Ui {
class DialogRelationshipTeacherDiscipline;
}

class DialogRelationshipTeacherDiscipline : public ADialog
{
public:
    explicit DialogRelationshipTeacherDiscipline(QWidget *parent = nullptr);
    explicit DialogRelationshipTeacherDiscipline(QWidget *parent, QMap<QString, QVariant>& row_to_change);
    ~DialogRelationshipTeacherDiscipline();
    void accept() override;
    QVector<QVariant> get_data() override;

private:
    void set_all_combo_box();
    Ui::DialogRelationshipTeacherDiscipline *_ui;
};

#endif // DIALOG_RELATIONSHIP_TEACHER_DISCIPLINE_H
