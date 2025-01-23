#ifndef FORM_MENU_H
#define FORM_MENU_H

#include <QWidget>
#include "test_form.h"
#include "model_table_discipline.h"
#include "model_table_teacher.h"
#include "model_table_student.h"
#include "model_table_group.h"
#include "model_table_stream.h"
#include "model_table_auditorium.h"
#include "model_table_relationship_stream_group.h"
#include "model_table_relationship_teacher_discipline.h"
#include "model_table_lecture.h"
#include "dialog_change_user.h"

namespace Ui {
class FormMenu;
}

class FormMenu : public QWidget
{
    Q_OBJECT

public:
    explicit FormMenu(QWidget *parent = nullptr);
    ~FormMenu();

private slots:
    void on_push_button_exit_clicked();
    void on_push_button_groups_clicked();

    void on_push_button_streams_clicked();

    void on_push_button_relationship_group_stream_clicked();

    void on_push_button_disciplines_clicked();

    void on_push_button_teachers_clicked();

    void on_push_button_relationship_teacher_disciplines_clicked();

    void on_push_button_students_clicked();

    void on_push_button_auditoriums_clicked();

    void on_push_button_lectures_clicked();

    void on_push_button_change_user_clicked();

private:
    template <typename ModelType>
    void create_test_form(QVector<int> hidden_index_column = QVector<int>());

    User user;
    Ui::FormMenu *_ui;
};

#endif // FORM_MENU_H
