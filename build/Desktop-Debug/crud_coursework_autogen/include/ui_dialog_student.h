/********************************************************************************
** Form generated from reading UI file 'dialog_student.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_STUDENT_H
#define UI_DIALOG_STUDENT_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogStudent
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_student_surname;
    QLabel *label_student_name;
    QLabel *label_student_patronymic;
    QLabel *label_student_group;
    QLabel *label_student_gender;
    QLineEdit *line_edit_student_surname;
    QLineEdit *line_edit_student_name;
    QLineEdit *line_edit_student_patronymic;
    QComboBox *combo_box_student_gender;
    QComboBox *combo_box_student_group;

    void setupUi(QDialog *DialogStudent)
    {
        if (DialogStudent->objectName().isEmpty())
            DialogStudent->setObjectName(QString::fromUtf8("DialogStudent"));
        DialogStudent->resize(400, 216);
        buttonBox = new QDialogButtonBox(DialogStudent);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 180, 171, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        formLayoutWidget = new QWidget(DialogStudent);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 161));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_student_surname = new QLabel(formLayoutWidget);
        label_student_surname->setObjectName(QString::fromUtf8("label_student_surname"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_student_surname);

        label_student_name = new QLabel(formLayoutWidget);
        label_student_name->setObjectName(QString::fromUtf8("label_student_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_student_name);

        label_student_patronymic = new QLabel(formLayoutWidget);
        label_student_patronymic->setObjectName(QString::fromUtf8("label_student_patronymic"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_student_patronymic);

        label_student_group = new QLabel(formLayoutWidget);
        label_student_group->setObjectName(QString::fromUtf8("label_student_group"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_student_group);

        label_student_gender = new QLabel(formLayoutWidget);
        label_student_gender->setObjectName(QString::fromUtf8("label_student_gender"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_student_gender);

        line_edit_student_surname = new QLineEdit(formLayoutWidget);
        line_edit_student_surname->setObjectName(QString::fromUtf8("line_edit_student_surname"));

        formLayout->setWidget(0, QFormLayout::FieldRole, line_edit_student_surname);

        line_edit_student_name = new QLineEdit(formLayoutWidget);
        line_edit_student_name->setObjectName(QString::fromUtf8("line_edit_student_name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, line_edit_student_name);

        line_edit_student_patronymic = new QLineEdit(formLayoutWidget);
        line_edit_student_patronymic->setObjectName(QString::fromUtf8("line_edit_student_patronymic"));

        formLayout->setWidget(2, QFormLayout::FieldRole, line_edit_student_patronymic);

        combo_box_student_gender = new QComboBox(formLayoutWidget);
        combo_box_student_gender->setObjectName(QString::fromUtf8("combo_box_student_gender"));

        formLayout->setWidget(3, QFormLayout::FieldRole, combo_box_student_gender);

        combo_box_student_group = new QComboBox(formLayoutWidget);
        combo_box_student_group->setObjectName(QString::fromUtf8("combo_box_student_group"));

        formLayout->setWidget(4, QFormLayout::FieldRole, combo_box_student_group);


        retranslateUi(DialogStudent);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogStudent, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogStudent, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogStudent);
    } // setupUi

    void retranslateUi(QDialog *DialogStudent)
    {
        DialogStudent->setWindowTitle(QCoreApplication::translate("DialogStudent", "Dialog", nullptr));
        label_student_surname->setText(QCoreApplication::translate("DialogStudent", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_student_name->setText(QCoreApplication::translate("DialogStudent", "\320\230\320\274\321\217", nullptr));
        label_student_patronymic->setText(QCoreApplication::translate("DialogStudent", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_student_group->setText(QCoreApplication::translate("DialogStudent", "\320\223\321\200\321\203\320\277\320\277\320\260", nullptr));
        label_student_gender->setText(QCoreApplication::translate("DialogStudent", "\320\237\320\276\320\273", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogStudent: public Ui_DialogStudent {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_STUDENT_H
