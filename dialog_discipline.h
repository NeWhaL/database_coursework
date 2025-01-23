#ifndef DIALOG_DISCIPLINE_H
#define DIALOG_DISCIPLINE_H

#include "adialog.h"

namespace Ui {
class DialogDiscipline;
}

class DialogDiscipline : public ADialog
{
public:
    explicit DialogDiscipline(QWidget *parent = nullptr);
    explicit DialogDiscipline(QWidget *parent, QMap<QString, QVariant>& row_to_change);
    ~DialogDiscipline();
    void accept() override;
    QVector<QVariant> get_data() override;

private:
    Ui::DialogDiscipline *_ui;
};

#endif // DIALOG_DISCIPLINE_H
