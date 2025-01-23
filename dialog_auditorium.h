#ifndef DIALOG_AUDITORIUM_H
#define DIALOG_AUDITORIUM_H

#include "atablemodel.h"

namespace Ui {
class DialogAuditorium;
}

class DialogAuditorium : public ADialog
{
public:
    explicit DialogAuditorium(QWidget *parent = nullptr);
    explicit DialogAuditorium(QWidget *parent, QMap<QString, QVariant>& row_to_change);
    ~DialogAuditorium();
    void accept() override;
    QVector<QVariant> get_data() override;

private:
    Ui::DialogAuditorium *_ui;
};

#endif // DIALOG_AUDITORIUM_H
