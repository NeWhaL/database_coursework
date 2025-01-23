#ifndef DIALOG_RELATIONSHIP_STREAM_GROUP_H
#define DIALOG_RELATIONSHIP_STREAM_GROUP_H

#include "atablemodel.h"

namespace Ui {
class DialogRelationshipStremGroup;
}

class DialogRelationshipStremGroup : public ADialog {
public:
    explicit DialogRelationshipStremGroup(QWidget *parent = nullptr);
    explicit DialogRelationshipStremGroup(QWidget *parent, QMap<QString, QVariant>& row_to_change);
    ~DialogRelationshipStremGroup();
    void accept() override;
    QVector<QVariant> get_data() override;

private:
    void set_all_combo_box();
    Ui::DialogRelationshipStremGroup *_ui;
};

#endif // DIALOG_RELATIONSHIP_STREAM_GROUP_H
