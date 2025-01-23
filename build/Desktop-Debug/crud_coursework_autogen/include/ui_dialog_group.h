/********************************************************************************
** Form generated from reading UI file 'dialog_group.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_GROUP_H
#define UI_DIALOG_GROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogGroup
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_group_name;
    QLineEdit *line_edit_group_name;

    void setupUi(QDialog *DialogGroup)
    {
        if (DialogGroup->objectName().isEmpty())
            DialogGroup->setObjectName(QString::fromUtf8("DialogGroup"));
        DialogGroup->resize(400, 87);
        buttonBox = new QDialogButtonBox(DialogGroup);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 50, 171, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        formLayoutWidget = new QWidget(DialogGroup);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_group_name = new QLabel(formLayoutWidget);
        label_group_name->setObjectName(QString::fromUtf8("label_group_name"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_group_name);

        line_edit_group_name = new QLineEdit(formLayoutWidget);
        line_edit_group_name->setObjectName(QString::fromUtf8("line_edit_group_name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, line_edit_group_name);


        retranslateUi(DialogGroup);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogGroup, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogGroup, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogGroup);
    } // setupUi

    void retranslateUi(QDialog *DialogGroup)
    {
        DialogGroup->setWindowTitle(QCoreApplication::translate("DialogGroup", "Dialog", nullptr));
        label_group_name->setText(QCoreApplication::translate("DialogGroup", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogGroup: public Ui_DialogGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_GROUP_H
