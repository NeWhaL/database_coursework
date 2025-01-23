#include "dialog_relationship_teacher_discipline.h"
#include "ui_dialog_relationship_teacher_discipline.h"

DialogRelationshipTeacherDiscipline::DialogRelationshipTeacherDiscipline(QWidget *parent)
    : ADialog(parent)
    , _ui(new Ui::DialogRelationshipTeacherDiscipline) {
    _ui->setupUi(this);
    set_all_combo_box();
}

DialogRelationshipTeacherDiscipline::DialogRelationshipTeacherDiscipline(QWidget *parent, QMap<QString, QVariant>& row_to_change)
    : ADialog(parent)
    , _ui(new Ui::DialogRelationshipTeacherDiscipline) {
    _ui->setupUi(this);
    set_all_combo_box();
    QString discipline_data = row_to_change["discipline_name"].toString();
    _ui->combo_box_discipline->setCurrentText(row_to_change["discipline_name"].toString());
    QString teacher_data = row_to_change["surname"].toString() + " "
                         + row_to_change["name"].toString() + " "
                         + row_to_change["patronymic"].toString() + " "
                         + row_to_change["department"].toString() + " "
                         + row_to_change["post"].toString() + " "
                         + row_to_change["academic_degree"].toString() + " "
                         + row_to_change["gender"].toString();
    _ui->combo_box_teacher->setCurrentText(teacher_data);
}

void DialogRelationshipTeacherDiscipline::set_all_combo_box() {
    set_combo_box(_ui->combo_box_discipline, "discipline", "name");
    set_combo_box(_ui->combo_box_teacher, "teacher", "id, surname, name, patronymic, department, post, academic_degree, gender");
}

DialogRelationshipTeacherDiscipline::~DialogRelationshipTeacherDiscipline() {
    delete _ui;
}

void DialogRelationshipTeacherDiscipline::accept() {
    if (_ui->combo_box_teacher->currentIndex() == -1) {
        QMessageBox::warning(this, "Не выбрано поле", "Не выбрано название потока");
        return;
    }
    if (_ui->combo_box_discipline->currentIndex() == -1) {
        QMessageBox::warning(this, "Не выбрано поле", "Не выбрано название группы");
        return;
    }
    QDialog::accept();
}

QVector<QVariant> DialogRelationshipTeacherDiscipline::get_data() {
    return {
        _ui->combo_box_teacher->currentData().toList()[0],
        _ui->combo_box_discipline->currentText(),
        _ui->combo_box_teacher->currentData().toList()[1],
        _ui->combo_box_teacher->currentData().toList()[2],
        _ui->combo_box_teacher->currentData().toList()[3],
        _ui->combo_box_teacher->currentData().toList()[4],
        _ui->combo_box_teacher->currentData().toList()[5],
        _ui->combo_box_teacher->currentData().toList()[6],
        _ui->combo_box_teacher->currentData().toList()[7],
    };
}
