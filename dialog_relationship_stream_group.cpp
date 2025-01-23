#include "dialog_relationship_stream_group.h"
#include "ui_dialog_relationship_stream_group.h"

DialogRelationshipStremGroup::DialogRelationshipStremGroup(QWidget *parent)
    : ADialog(parent)
    , _ui(new Ui::DialogRelationshipStremGroup) {
    _ui->setupUi(this);
    set_all_combo_box();
}

DialogRelationshipStremGroup::DialogRelationshipStremGroup(QWidget *parent, QMap<QString, QVariant>& row_to_change)
    :ADialog(parent)
    , _ui(new Ui::DialogRelationshipStremGroup) {
    _ui->setupUi(this);
    set_all_combo_box();
    _ui->combo_box_relationship_stream_name->setCurrentText(row_to_change["stream_name"].toString());
    _ui->combo_box_relationship_group_name->setCurrentText(row_to_change["group_name"].toString());
}

DialogRelationshipStremGroup::~DialogRelationshipStremGroup() {
    delete _ui;
}

void DialogRelationshipStremGroup::set_all_combo_box() {
    set_combo_box(_ui->combo_box_relationship_stream_name, "stream", "name");
    set_combo_box(_ui->combo_box_relationship_group_name, "\"group\"", "name");
}


void DialogRelationshipStremGroup::accept() {
    if (_ui->combo_box_relationship_stream_name->currentIndex() == -1) {
        QMessageBox::warning(this, "Не выбрано поле", "Не выбрано название потока");
        return;
    }
    if (_ui->combo_box_relationship_group_name->currentIndex() == -1) {
        QMessageBox::warning(this, "Не выбрано поле", "Не выбрано название группы");
        return;
    }
    QDialog::accept();
}

QVector<QVariant> DialogRelationshipStremGroup::get_data() {
    return {
        _ui->combo_box_relationship_stream_name->currentText(),
        _ui->combo_box_relationship_group_name->currentText()
    };
}
