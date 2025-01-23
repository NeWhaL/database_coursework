#include "dialog_auditorium.h"
#include "ui_dialog_auditorium.h"

DialogAuditorium::DialogAuditorium(QWidget *parent)
    : ADialog(parent)
    , _ui(new Ui::DialogAuditorium) {
    _ui->setupUi(this);
}

DialogAuditorium::DialogAuditorium(QWidget *parent, QMap<QString, QVariant>& row_to_change)
    : ADialog(parent)
    , _ui(new Ui::DialogAuditorium) {
    _ui->setupUi(this);
    _ui->line_edit_auditorium_building_number->setText(row_to_change["building_number"].toString());
    _ui->line_edit_auditorium_name->setText(row_to_change["audience_name"].toString());
}

DialogAuditorium::~DialogAuditorium() {
    delete _ui;
}

void DialogAuditorium::accept() {
    bool is_ok;
    uint value = _ui->line_edit_auditorium_building_number->text().toUInt(&is_ok);
    if (!is_ok) {
        QMessageBox::critical(this,
                              "Некорректное поле",
                              "Номер корпуса может быть только положительным целочисленным числом");
        return;
    }
    if (_ui->line_edit_auditorium_name->text().isEmpty()) {
        QMessageBox::critical(this,
                              "Некорректное поле",
                              "Название аудитории не может быть пустым");
        return;
    }
    QDialog::accept();

}

QVector<QVariant> DialogAuditorium::get_data() {
    return {
        _ui->line_edit_auditorium_building_number->text(),
        _ui->line_edit_auditorium_name->text()
    };
}
