#ifndef DIALOG_GROUP_H
#define DIALOG_GROUP_H

#include "adialog.h"

namespace Ui {
class DialogGroup;
}

class DialogGroup : public ADialog
{
public:
    explicit DialogGroup(QWidget *parent = nullptr);
    ~DialogGroup();
    explicit DialogGroup(QWidget *parent, QMap<QString, QVariant>& row_to_change);
    void accept() override;
    QVector<QVariant> get_data() override;

private:
    Ui::DialogGroup *_ui;
};

#endif // DIALOG_GROUP_H
