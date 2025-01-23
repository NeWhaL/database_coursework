/********************************************************************************
** Form generated from reading UI file 'dialog_auditorium.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_AUDITORIUM_H
#define UI_DIALOG_AUDITORIUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogAuditorium
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_auditorium_building_number;
    QLabel *label_auditorium_name;
    QLineEdit *line_edit_auditorium_building_number;
    QLineEdit *line_edit_auditorium_name;

    void setupUi(QDialog *DialogAuditorium)
    {
        if (DialogAuditorium->objectName().isEmpty())
            DialogAuditorium->setObjectName(QString::fromUtf8("DialogAuditorium"));
        DialogAuditorium->resize(400, 115);
        buttonBox = new QDialogButtonBox(DialogAuditorium);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(210, 80, 171, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        formLayoutWidget = new QWidget(DialogAuditorium);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 61));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_auditorium_building_number = new QLabel(formLayoutWidget);
        label_auditorium_building_number->setObjectName(QString::fromUtf8("label_auditorium_building_number"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_auditorium_building_number);

        label_auditorium_name = new QLabel(formLayoutWidget);
        label_auditorium_name->setObjectName(QString::fromUtf8("label_auditorium_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_auditorium_name);

        line_edit_auditorium_building_number = new QLineEdit(formLayoutWidget);
        line_edit_auditorium_building_number->setObjectName(QString::fromUtf8("line_edit_auditorium_building_number"));

        formLayout->setWidget(0, QFormLayout::FieldRole, line_edit_auditorium_building_number);

        line_edit_auditorium_name = new QLineEdit(formLayoutWidget);
        line_edit_auditorium_name->setObjectName(QString::fromUtf8("line_edit_auditorium_name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, line_edit_auditorium_name);


        retranslateUi(DialogAuditorium);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogAuditorium, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogAuditorium, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogAuditorium);
    } // setupUi

    void retranslateUi(QDialog *DialogAuditorium)
    {
        DialogAuditorium->setWindowTitle(QCoreApplication::translate("DialogAuditorium", "Dialog", nullptr));
        label_auditorium_building_number->setText(QCoreApplication::translate("DialogAuditorium", "\320\235\320\276\320\274\320\265\321\200 \320\272\320\276\321\200\320\277\321\203\321\201\320\260", nullptr));
        label_auditorium_name->setText(QCoreApplication::translate("DialogAuditorium", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\260\321\203\320\264\320\270\321\202\320\276\321\200\320\270\320\270/\320\275\320\276\320\274\320\265\321\200", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogAuditorium: public Ui_DialogAuditorium {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_AUDITORIUM_H
