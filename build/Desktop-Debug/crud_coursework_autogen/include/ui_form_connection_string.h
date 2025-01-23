/********************************************************************************
** Form generated from reading UI file 'form_connection_string.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_FORM_CONNECTION_STRING_H
#define UI_FORM_CONNECTION_STRING_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_FormConnectionString
{
public:
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLabel *label_4;
    QLineEdit *line_edit_db_name;
    QLineEdit *line_edit_port;
    QLineEdit *line_edit_user_name;
    QLineEdit *line_edit_password;
    QLineEdit *line_edit_ip;
    QLabel *label_5;
    QPushButton *push_button_connect;

    void setupUi(QWidget *FormConnectionString)
    {
        if (FormConnectionString->objectName().isEmpty())
            FormConnectionString->setObjectName(QString::fromUtf8("FormConnectionString"));
        FormConnectionString->resize(400, 209);
        formLayoutWidget = new QWidget(FormConnectionString);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 151));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_3);

        label_4 = new QLabel(formLayoutWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_4);

        line_edit_db_name = new QLineEdit(formLayoutWidget);
        line_edit_db_name->setObjectName(QString::fromUtf8("line_edit_db_name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, line_edit_db_name);

        line_edit_port = new QLineEdit(formLayoutWidget);
        line_edit_port->setObjectName(QString::fromUtf8("line_edit_port"));

        formLayout->setWidget(2, QFormLayout::FieldRole, line_edit_port);

        line_edit_user_name = new QLineEdit(formLayoutWidget);
        line_edit_user_name->setObjectName(QString::fromUtf8("line_edit_user_name"));

        formLayout->setWidget(3, QFormLayout::FieldRole, line_edit_user_name);

        line_edit_password = new QLineEdit(formLayoutWidget);
        line_edit_password->setObjectName(QString::fromUtf8("line_edit_password"));
        line_edit_password->setEchoMode(QLineEdit::EchoMode::Password);

        formLayout->setWidget(4, QFormLayout::FieldRole, line_edit_password);

        line_edit_ip = new QLineEdit(formLayoutWidget);
        line_edit_ip->setObjectName(QString::fromUtf8("line_edit_ip"));

        formLayout->setWidget(0, QFormLayout::FieldRole, line_edit_ip);

        label_5 = new QLabel(formLayoutWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_5);

        push_button_connect = new QPushButton(FormConnectionString);
        push_button_connect->setObjectName(QString::fromUtf8("push_button_connect"));
        push_button_connect->setGeometry(QRect(140, 170, 111, 31));
        push_button_connect->setCursor(QCursor(Qt::PointingHandCursor));

        retranslateUi(FormConnectionString);

        QMetaObject::connectSlotsByName(FormConnectionString);
    } // setupUi

    void retranslateUi(QWidget *FormConnectionString)
    {
        FormConnectionString->setWindowTitle(QCoreApplication::translate("FormConnectionString", "Form", nullptr));
        label->setText(QCoreApplication::translate("FormConnectionString", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\261\320\260\320\267\321\213 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
        label_2->setText(QCoreApplication::translate("FormConnectionString", "\320\237\320\276\321\200\321\202", nullptr));
        label_3->setText(QCoreApplication::translate("FormConnectionString", "\320\230\320\274\321\217 \320\277\320\276\320\273\321\214\320\267\320\276\320\262\320\260\321\202\320\265\320\273\321\217", nullptr));
        label_4->setText(QCoreApplication::translate("FormConnectionString", "\320\237\320\260\321\200\320\276\320\273\321\214", nullptr));
        label_5->setText(QCoreApplication::translate("FormConnectionString", "ip \320\260\320\264\321\200\320\265\321\201", nullptr));
        push_button_connect->setText(QCoreApplication::translate("FormConnectionString", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214\321\201\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class FormConnectionString: public Ui_FormConnectionString {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_FORM_CONNECTION_STRING_H
