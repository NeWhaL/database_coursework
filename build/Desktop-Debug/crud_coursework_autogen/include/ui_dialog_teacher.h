/********************************************************************************
** Form generated from reading UI file 'dialog_teacher.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_TEACHER_H
#define UI_DIALOG_TEACHER_H

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

class Ui_DialogTeacher
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_teacher_surname;
    QLabel *label_teacher_name;
    QLabel *label_teacher_patronymic;
    QLabel *label_teacher_gender;
    QLabel *label_academic_degree;
    QLabel *label_teacher_post;
    QLabel *label_teacher_department;
    QLineEdit *line_edit_teacher_surname;
    QLineEdit *line_edit_teacher_name;
    QLineEdit *line_edit_teacher_patronymic;
    QComboBox *combo_box_teacher_gender;
    QComboBox *combo_box_teacher_academic_degree;
    QComboBox *combo_box_teacher_post;
    QComboBox *combo_box_teacher_department;

    void setupUi(QDialog *DialogTeacher)
    {
        if (DialogTeacher->objectName().isEmpty())
            DialogTeacher->setObjectName(QString::fromUtf8("DialogTeacher"));
        DialogTeacher->resize(400, 279);
        buttonBox = new QDialogButtonBox(DialogTeacher);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 240, 171, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        formLayoutWidget = new QWidget(DialogTeacher);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 221));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_teacher_surname = new QLabel(formLayoutWidget);
        label_teacher_surname->setObjectName(QString::fromUtf8("label_teacher_surname"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_teacher_surname);

        label_teacher_name = new QLabel(formLayoutWidget);
        label_teacher_name->setObjectName(QString::fromUtf8("label_teacher_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_teacher_name);

        label_teacher_patronymic = new QLabel(formLayoutWidget);
        label_teacher_patronymic->setObjectName(QString::fromUtf8("label_teacher_patronymic"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_teacher_patronymic);

        label_teacher_gender = new QLabel(formLayoutWidget);
        label_teacher_gender->setObjectName(QString::fromUtf8("label_teacher_gender"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_teacher_gender);

        label_academic_degree = new QLabel(formLayoutWidget);
        label_academic_degree->setObjectName(QString::fromUtf8("label_academic_degree"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_academic_degree);

        label_teacher_post = new QLabel(formLayoutWidget);
        label_teacher_post->setObjectName(QString::fromUtf8("label_teacher_post"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_teacher_post);

        label_teacher_department = new QLabel(formLayoutWidget);
        label_teacher_department->setObjectName(QString::fromUtf8("label_teacher_department"));

        formLayout->setWidget(6, QFormLayout::LabelRole, label_teacher_department);

        line_edit_teacher_surname = new QLineEdit(formLayoutWidget);
        line_edit_teacher_surname->setObjectName(QString::fromUtf8("line_edit_teacher_surname"));

        formLayout->setWidget(0, QFormLayout::FieldRole, line_edit_teacher_surname);

        line_edit_teacher_name = new QLineEdit(formLayoutWidget);
        line_edit_teacher_name->setObjectName(QString::fromUtf8("line_edit_teacher_name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, line_edit_teacher_name);

        line_edit_teacher_patronymic = new QLineEdit(formLayoutWidget);
        line_edit_teacher_patronymic->setObjectName(QString::fromUtf8("line_edit_teacher_patronymic"));

        formLayout->setWidget(2, QFormLayout::FieldRole, line_edit_teacher_patronymic);

        combo_box_teacher_gender = new QComboBox(formLayoutWidget);
        combo_box_teacher_gender->setObjectName(QString::fromUtf8("combo_box_teacher_gender"));

        formLayout->setWidget(3, QFormLayout::FieldRole, combo_box_teacher_gender);

        combo_box_teacher_academic_degree = new QComboBox(formLayoutWidget);
        combo_box_teacher_academic_degree->setObjectName(QString::fromUtf8("combo_box_teacher_academic_degree"));

        formLayout->setWidget(4, QFormLayout::FieldRole, combo_box_teacher_academic_degree);

        combo_box_teacher_post = new QComboBox(formLayoutWidget);
        combo_box_teacher_post->setObjectName(QString::fromUtf8("combo_box_teacher_post"));

        formLayout->setWidget(5, QFormLayout::FieldRole, combo_box_teacher_post);

        combo_box_teacher_department = new QComboBox(formLayoutWidget);
        combo_box_teacher_department->setObjectName(QString::fromUtf8("combo_box_teacher_department"));

        formLayout->setWidget(6, QFormLayout::FieldRole, combo_box_teacher_department);


        retranslateUi(DialogTeacher);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogTeacher, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogTeacher, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogTeacher);
    } // setupUi

    void retranslateUi(QDialog *DialogTeacher)
    {
        DialogTeacher->setWindowTitle(QCoreApplication::translate("DialogTeacher", "Dialog", nullptr));
        label_teacher_surname->setText(QCoreApplication::translate("DialogTeacher", "\320\244\320\260\320\274\320\270\320\273\320\270\321\217", nullptr));
        label_teacher_name->setText(QCoreApplication::translate("DialogTeacher", "\320\230\320\274\321\217", nullptr));
        label_teacher_patronymic->setText(QCoreApplication::translate("DialogTeacher", "\320\236\321\202\321\207\320\265\321\201\321\202\320\262\320\276", nullptr));
        label_teacher_gender->setText(QCoreApplication::translate("DialogTeacher", "\320\237\320\276\320\273", nullptr));
        label_academic_degree->setText(QCoreApplication::translate("DialogTeacher", "\320\243\321\207\321\221\320\275\320\260\321\217 \321\201\321\202\320\265\320\277\320\265\320\275\321\214", nullptr));
        label_teacher_post->setText(QCoreApplication::translate("DialogTeacher", "\320\237\320\276\321\201\321\202", nullptr));
        label_teacher_department->setText(QCoreApplication::translate("DialogTeacher", "\320\232\320\260\321\204\320\265\320\264\321\200\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogTeacher: public Ui_DialogTeacher {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_TEACHER_H
