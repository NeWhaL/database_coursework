#ifndef DIALOG_STUDENT_H
#define DIALOG_STUDENT_H

#include "adialog.h"

namespace Ui {
class DialogStudent;
}

class DialogStudent : public ADialog
{
public:
    explicit DialogStudent(QWidget *parent = nullptr);
    ~DialogStudent();
    explicit DialogStudent(QWidget *parent, QMap<QString, QVariant>& row_to_change);
    void accept() override;
    QVector<QVariant> get_data() override;

private:
    void set_all_combo_box();
    Ui::DialogStudent *_ui;
};

#endif // DIALOG_STUDENT_H
