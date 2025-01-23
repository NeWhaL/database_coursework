/********************************************************************************
** Form generated from reading UI file 'form_menu.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_MENU_H
#define UI_FORM_MENU_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QGridLayout>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormMenu
{
public:
    QWidget *gridLayoutWidget;
    QGridLayout *gridLayout;
    QPushButton *push_button_streams;
    QPushButton *push_button_groups;
    QPushButton *push_button_auditoriums;
    QPushButton *push_button_relationship_teacher_disciplines;
    QPushButton *push_button_students;
    QPushButton *push_button_teachers;
    QPushButton *push_button_relationship_group_stream;
    QPushButton *push_button_lectures;
    QPushButton *push_button_disciplines;
    QPushButton *push_button_change_user;
    QPushButton *push_button_exit;

    void setupUi(QWidget *FormMenu)
    {
        if (FormMenu->objectName().isEmpty())
            FormMenu->setObjectName(QString::fromUtf8("FormMenu"));
        FormMenu->resize(520, 307);
        gridLayoutWidget = new QWidget(FormMenu);
        gridLayoutWidget->setObjectName(QString::fromUtf8("gridLayoutWidget"));
        gridLayoutWidget->setGeometry(QRect(10, 10, 501, 291));
        gridLayout = new QGridLayout(gridLayoutWidget);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        gridLayout->setContentsMargins(0, 0, 0, 0);
        push_button_streams = new QPushButton(gridLayoutWidget);
        push_button_streams->setObjectName(QString::fromUtf8("push_button_streams"));

        gridLayout->addWidget(push_button_streams, 0, 1, 1, 1);

        push_button_groups = new QPushButton(gridLayoutWidget);
        push_button_groups->setObjectName(QString::fromUtf8("push_button_groups"));

        gridLayout->addWidget(push_button_groups, 0, 0, 1, 1);

        push_button_auditoriums = new QPushButton(gridLayoutWidget);
        push_button_auditoriums->setObjectName(QString::fromUtf8("push_button_auditoriums"));

        gridLayout->addWidget(push_button_auditoriums, 2, 1, 1, 1);

        push_button_relationship_teacher_disciplines = new QPushButton(gridLayoutWidget);
        push_button_relationship_teacher_disciplines->setObjectName(QString::fromUtf8("push_button_relationship_teacher_disciplines"));

        gridLayout->addWidget(push_button_relationship_teacher_disciplines, 1, 2, 1, 1);

        push_button_students = new QPushButton(gridLayoutWidget);
        push_button_students->setObjectName(QString::fromUtf8("push_button_students"));

        gridLayout->addWidget(push_button_students, 2, 0, 1, 1);

        push_button_teachers = new QPushButton(gridLayoutWidget);
        push_button_teachers->setObjectName(QString::fromUtf8("push_button_teachers"));

        gridLayout->addWidget(push_button_teachers, 1, 1, 1, 1);

        push_button_relationship_group_stream = new QPushButton(gridLayoutWidget);
        push_button_relationship_group_stream->setObjectName(QString::fromUtf8("push_button_relationship_group_stream"));

        gridLayout->addWidget(push_button_relationship_group_stream, 0, 2, 1, 1);

        push_button_lectures = new QPushButton(gridLayoutWidget);
        push_button_lectures->setObjectName(QString::fromUtf8("push_button_lectures"));

        gridLayout->addWidget(push_button_lectures, 2, 2, 1, 1);

        push_button_disciplines = new QPushButton(gridLayoutWidget);
        push_button_disciplines->setObjectName(QString::fromUtf8("push_button_disciplines"));

        gridLayout->addWidget(push_button_disciplines, 1, 0, 1, 1);

        push_button_change_user = new QPushButton(gridLayoutWidget);
        push_button_change_user->setObjectName(QString::fromUtf8("push_button_change_user"));

        gridLayout->addWidget(push_button_change_user, 3, 0, 1, 1);

        push_button_exit = new QPushButton(gridLayoutWidget);
        push_button_exit->setObjectName(QString::fromUtf8("push_button_exit"));

        gridLayout->addWidget(push_button_exit, 3, 2, 1, 1);


        retranslateUi(FormMenu);

        QMetaObject::connectSlotsByName(FormMenu);
    } // setupUi

    void retranslateUi(QWidget *FormMenu)
    {
        FormMenu->setWindowTitle(QCoreApplication::translate("FormMenu", "Form", nullptr));
        push_button_streams->setText(QCoreApplication::translate("FormMenu", "\320\237\320\276\321\202\320\276\320\272\320\270", nullptr));
        push_button_groups->setText(QCoreApplication::translate("FormMenu", "\320\223\321\200\321\203\320\277\320\277\321\213", nullptr));
        push_button_auditoriums->setText(QCoreApplication::translate("FormMenu", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\320\270\320\270", nullptr));
        push_button_relationship_teacher_disciplines->setText(QCoreApplication::translate("FormMenu", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\320\270 \320\270 \320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\321\213", nullptr));
        push_button_students->setText(QCoreApplication::translate("FormMenu", "\320\241\321\202\321\203\320\264\320\265\320\275\321\202\321\213", nullptr));
        push_button_teachers->setText(QCoreApplication::translate("FormMenu", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\320\270", nullptr));
        push_button_relationship_group_stream->setText(QCoreApplication::translate("FormMenu", "\320\223\321\200\321\203\320\277\320\277\321\213 \320\270 \320\277\320\276\321\202\320\276\320\272\320\270", nullptr));
        push_button_lectures->setText(QCoreApplication::translate("FormMenu", "\320\233\320\265\320\272\321\206\320\270\320\270", nullptr));
        push_button_disciplines->setText(QCoreApplication::translate("FormMenu", "\320\224\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\321\213", nullptr));
        push_button_change_user->setText(QCoreApplication::translate("FormMenu", "\320\241\320\274\320\265\320\275\320\270\321\202\321\214 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        push_button_exit->setText(QCoreApplication::translate("FormMenu", "\320\222\321\213\321\205\320\276\320\264", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormMenu: public Ui_FormMenu {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_MENU_H
