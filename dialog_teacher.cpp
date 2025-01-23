#include "dialog_teacher.h"
#include "ui_dialog_teacher.h"

DialogTeacher::DialogTeacher(QWidget *parent)
    : ADialog(parent)
    , _ui(new Ui::DialogTeacher) {
    _ui->setupUi(this);
    set_all_combo_box();
}

DialogTeacher::~DialogTeacher() {
    delete _ui;
}

DialogTeacher::DialogTeacher(QWidget *parent, QMap<QString, QVariant>& row_to_change)
    : ADialog(parent)
    , _ui(new Ui::DialogTeacher) {
    _ui->setupUi(this);
    set_all_combo_box();
    _ui->line_edit_teacher_surname->setText(row_to_change["surname"].toString());
    _ui->line_edit_teacher_name->setText(row_to_change["name"].toString());
    _ui->line_edit_teacher_patronymic->setText(row_to_change["patronymic"].toString());
    _ui->combo_box_teacher_academic_degree->setCurrentText(row_to_change["academic_degree"].toString());
    _ui->combo_box_teacher_post->setCurrentText(row_to_change["post"].toString());
    _ui->combo_box_teacher_department->setCurrentText(row_to_change["department"].toString());
    _ui->combo_box_teacher_gender->setCurrentText(row_to_change["gender"].toString());
}

void DialogTeacher::set_all_combo_box() {
    set_combo_box(_ui->combo_box_teacher_post, "teacher", "post");
    set_combo_box(_ui->combo_box_teacher_academic_degree, "teacher", "academic_degree");
    set_combo_box(_ui->combo_box_teacher_department, "teacher", "department");
    set_combo_box(_ui->combo_box_teacher_gender, "teacher", "gender");
}

void DialogTeacher::accept() {
    QString error("Некорректное поле: ");
    bool is_ok {true};
    if (_ui->line_edit_teacher_surname->text().isEmpty()) {
        error += "не введена фамилия...";
        is_ok = false;
    } else if (_ui->line_edit_teacher_name->text().isEmpty()) {
        error += "не введено имя...";
        is_ok = false;
    } else if (_ui->combo_box_teacher_academic_degree->currentIndex() == -1) {
        error += "не выбрана академическая степень...";
        is_ok = false;
    } else if (_ui->combo_box_teacher_department->currentIndex() == -1) {
        error += "не выбрана кафедра...";
        is_ok = false;
    } else if (_ui->combo_box_teacher_gender->currentIndex() == -1) {
        error += "не выбран пол...";
        is_ok = false;
    } else if (_ui->combo_box_teacher_post->currentIndex() == -1) {
        error += "не выбран пост...";
        is_ok = false;
    }
    if (!is_ok) {
        QMessageBox::critical(this, "Некорректное поле", error);
        return;
    }
    QDialog::accept();
}

QVector<QVariant> DialogTeacher::get_data() {
    return {
        _ui->line_edit_teacher_name->text(),
        _ui->line_edit_teacher_surname->text(),
        _ui->line_edit_teacher_patronymic->text(),
        _ui->combo_box_teacher_department->currentText(),
        _ui->combo_box_teacher_post->currentText(),
        _ui->combo_box_teacher_academic_degree->currentText(),
        _ui->combo_box_teacher_gender->currentText()
    };
}
