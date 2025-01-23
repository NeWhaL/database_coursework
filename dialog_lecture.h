#ifndef DIALOG_LECTURE_H
#define DIALOG_LECTURE_H

#include "adialog.h"

namespace Ui {
class DialogLecture;
}

class DialogLecture : public ADialog
{
public:
    explicit DialogLecture(QWidget *parent = nullptr);
    ~DialogLecture();
    explicit DialogLecture(QWidget *parent, QMap<QString, QVariant>& row_to_change);
    void accept() override;
    QVector<QVariant> get_data() override;

private:
    void set_all_combo_box();
    void set_date_format();
    Ui::DialogLecture *_ui;

private slots:
    void set_combo_box_teacher(const QString& discipline_name);
};

#endif // DIALOG_LECTURE_H
