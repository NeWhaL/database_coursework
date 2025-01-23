#include "dialog_student.h"
#include "ui_dialog_student.h"

DialogStudent::DialogStudent(QWidget *parent)
    : ADialog(parent)
    , _ui(new Ui::DialogStudent) {
    _ui->setupUi(this);
    set_all_combo_box();
}

DialogStudent::~DialogStudent() {
    delete _ui;
}

DialogStudent::DialogStudent(QWidget* parent, QMap<QString, QVariant>& row_to_change)
    : ADialog(parent)
    , _ui(new Ui::DialogStudent) {
    _ui->setupUi(this);
    set_all_combo_box();
    _ui->line_edit_student_surname->setText(row_to_change["surname"].toString());
    _ui->line_edit_student_name->setText(row_to_change["name"].toString());
    _ui->line_edit_student_patronymic->setText(row_to_change["patronymic"].toString());
    _ui->combo_box_student_gender->setCurrentText(row_to_change["gender"].toString());
    _ui->combo_box_student_group->setCurrentText(row_to_change["group_name"].toString());
}

void DialogStudent::set_all_combo_box() {
    set_combo_box(_ui->combo_box_student_gender, "student", "gender");
    set_combo_box(_ui->combo_box_student_group, "\"group\"", "name");
}

void DialogStudent::accept() {
    QString error("Некорректное поле: ");
    bool is_ok {true};
    if (_ui->line_edit_student_surname->text().isEmpty()) {
        error += "Не введена фамилия...";
        is_ok = false;
    } else if (_ui->line_edit_student_name->text().isEmpty()) {
        error += "Не введено имя...";
        is_ok = false;
    } else if (_ui->line_edit_student_patronymic->text().isEmpty()) {
        error += "Не введено отчество...";
        is_ok = false;
    } else if (_ui->combo_box_student_gender->currentIndex() == -1) {
        error += "Не выбран пол...";
        is_ok = false;
    } else if (_ui->combo_box_student_group->currentIndex() == -1) {
        error += "Не выбрана группа...";
        is_ok = false;
    }
    if (!is_ok) {
        QMessageBox::critical(this, "Некорректное поле", error);
        return;
    }
    QDialog::accept();
}

QVector<QVariant> DialogStudent::get_data() {
    return {
        _ui->line_edit_student_name->text(),
        _ui->line_edit_student_surname->text(),
        _ui->line_edit_student_patronymic->text(),
        _ui->combo_box_student_group->currentText(),
        _ui->combo_box_student_gender->currentText()
    };
}
