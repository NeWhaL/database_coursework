#include "dialog_discipline.h"
#include "ui_dialog_discipline.h"

DialogDiscipline::DialogDiscipline(QWidget *parent)
    : ADialog(parent)
    , _ui(new Ui::DialogDiscipline) {
    _ui->setupUi(this);
}

DialogDiscipline::DialogDiscipline(QWidget *parent, QMap<QString, QVariant>& row_to_change)
    : ADialog(parent)
    , _ui(new Ui::DialogDiscipline) {
    _ui->setupUi(this);
    _ui->discipline_name->setText(row_to_change["name"].toString());
    _ui->discipline_amount_hours->setText(row_to_change["amount_hours"].toString());
    _ui->discipline_cycle->setText(row_to_change["cycle"].toString());
}

DialogDiscipline::~DialogDiscipline() {
    delete _ui;
}

void DialogDiscipline::accept() {
    bool is_ok;
    uint value = _ui->discipline_amount_hours->text().toUInt(&is_ok);
    if (!is_ok) {
        QMessageBox::critical(this,
                              "Некорректное поле",
                              "Неверно введено количество часов (поле может содержать только положительные числа");
        return;
    }
    QDialog::accept();
}

QVector<QVariant> DialogDiscipline::get_data() {
    return {
        _ui->discipline_name->text(),
        _ui->discipline_amount_hours->text(),
        _ui->discipline_cycle->text()
    };
}
