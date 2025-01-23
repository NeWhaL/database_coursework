#include "dialog_group.h"
#include "ui_dialog_group.h"

DialogGroup::DialogGroup(QWidget *parent)
    : ADialog(parent)
    , _ui(new Ui::DialogGroup) {
    _ui->setupUi(this);
}

DialogGroup::DialogGroup(QWidget *parent, QMap<QString, QVariant>& row_to_change)
    : ADialog(parent)
    , _ui(new Ui::DialogGroup) {
    _ui->setupUi(this);
    _ui->line_edit_group_name->setText(row_to_change["name"].toString());
}

DialogGroup::~DialogGroup() {
    delete _ui;
}
void DialogGroup::accept() {
    if (_ui->line_edit_group_name->text().isEmpty()) {
        QMessageBox::critical(this,
                              "Некорректное поле",
                              "Пустое поле");
        return;
    }
    QDialog::accept();
}
QVector<QVariant> DialogGroup::get_data() {
    return {
        _ui->line_edit_group_name->text()
    };
}
