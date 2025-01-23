/********************************************************************************
** Form generated from reading UI file 'dialog_change_user.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_CHANGE_USER_H
#define UI_DIALOG_CHANGE_USER_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogChangeUser
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *line_edit_login;
    QLineEdit *line_edit_password;

    void setupUi(QDialog *DialogChangeUser)
    {
        if (DialogChangeUser->objectName().isEmpty())
            DialogChangeUser->setObjectName(QString::fromUtf8("DialogChangeUser"));
        DialogChangeUser->resize(400, 114);
        buttonBox = new QDialogButtonBox(DialogChangeUser);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 80, 171, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        formLayoutWidget = new QWidget(DialogChangeUser);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 61));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        line_edit_login = new QLineEdit(formLayoutWidget);
        line_edit_login->setObjectName(QString::fromUtf8("line_edit_login"));

        formLayout->setWidget(0, QFormLayout::FieldRole, line_edit_login);

        line_edit_password = new QLineEdit(formLayoutWidget);
        line_edit_password->setObjectName(QString::fromUtf8("line_edit_password"));

        formLayout->setWidget(1, QFormLayout::FieldRole, line_edit_password);


        retranslateUi(DialogChangeUser);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogChangeUser, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogChangeUser, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogChangeUser);
    } // setupUi

    void retranslateUi(QDialog *DialogChangeUser)
    {
        DialogChangeUser->setWindowTitle(QCoreApplication::translate("DialogChangeUser", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogChangeUser", "\320\233\320\276\320\263\320\270\320\275", nullptr));
        label_2->setText(QCoreApplication::translate("DialogChangeUser", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogChangeUser: public Ui_DialogChangeUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_CHANGE_USER_H
