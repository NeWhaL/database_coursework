#ifndef DIALOG_TEACHER_H
#define DIALOG_TEACHER_H

#include "adialog.h"

namespace Ui {
class DialogTeacher;
}

class DialogTeacher : public ADialog
{
public:
    explicit DialogTeacher(QWidget *parent = nullptr);
    ~DialogTeacher();
    explicit DialogTeacher(QWidget *parent, QMap<QString, QVariant>& row_to_change);
    void accept() override;
    QVector<QVariant> get_data() override;

private:
    void set_all_combo_box();
    Ui::DialogTeacher *_ui;
};

#endif // DIALOG_TEACHER_H
