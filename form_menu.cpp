#include "form_menu.h"
#include "ui_form_menu.h"

FormMenu::FormMenu(QWidget *parent)
: QWidget(parent)
, _ui(new Ui::FormMenu) {
    _ui->setupUi(this);
}

FormMenu::~FormMenu() {
    delete _ui;
}

void FormMenu::on_push_button_exit_clicked() {
    this->close();
}

template <typename ModelType>
void FormMenu::create_test_form(QVector<int> hidden_index_column) {
    test_form* crud_window = new test_form(nullptr, new ModelType(), hidden_index_column, user);
    crud_window->setAttribute(Qt::WA_DeleteOnClose);
    this->setEnabled(false);
    connect(crud_window, &QObject::destroyed, this, [this](){
        this->setEnabled(true);
    });
    crud_window->show();
}

void FormMenu::on_push_button_groups_clicked() {
    create_test_form<ModelTableGroup>();
}


void FormMenu::on_push_button_streams_clicked() {
    create_test_form<ModelTableStream>();
}


void FormMenu::on_push_button_relationship_group_stream_clicked() {
    create_test_form<ModelTableRelationshipStreamGroup>({0});
}

void FormMenu::on_push_button_disciplines_clicked() {
    create_test_form<ModelTableDiscipline>();
}


void FormMenu::on_push_button_teachers_clicked() {
    create_test_form<ModelTableTeacher>({0});
}


void FormMenu::on_push_button_relationship_teacher_disciplines_clicked() {
    create_test_form<ModelTableRelationshipTeacherDiscipline>({0, 1});
}


void FormMenu::on_push_button_students_clicked() {
    create_test_form<ModelTableStudent>({0});
}


void FormMenu::on_push_button_auditoriums_clicked() {
    create_test_form<ModelTableAuditorium>({0});
}


void FormMenu::on_push_button_lectures_clicked() {
    create_test_form<ModelTableLecture>({0, 1, 2, 3});
}

void FormMenu::on_push_button_change_user_clicked() {
    DialogChangeUser* dialog {new DialogChangeUser};
    if (dialog->exec() ==  QDialog::Rejected)
        return;
    user = dialog->get_user();
}

