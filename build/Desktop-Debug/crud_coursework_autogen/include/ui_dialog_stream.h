/********************************************************************************
** Form generated from reading UI file 'dialog_stream.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_STREAM_H
#define UI_DIALOG_STREAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogStream
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_stream_name;
    QLineEdit *line_edit_stream_name;

    void setupUi(QDialog *DialogStream)
    {
        if (DialogStream->objectName().isEmpty())
            DialogStream->setObjectName(QString::fromUtf8("DialogStream"));
        DialogStream->resize(400, 86);
        buttonBox = new QDialogButtonBox(DialogStream);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 50, 171, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        formLayoutWidget = new QWidget(DialogStream);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 31));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_stream_name = new QLabel(formLayoutWidget);
        label_stream_name->setObjectName(QString::fromUtf8("label_stream_name"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_stream_name);

        line_edit_stream_name = new QLineEdit(formLayoutWidget);
        line_edit_stream_name->setObjectName(QString::fromUtf8("line_edit_stream_name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, line_edit_stream_name);


        retranslateUi(DialogStream);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogStream, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogStream, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogStream);
    } // setupUi

    void retranslateUi(QDialog *DialogStream)
    {
        DialogStream->setWindowTitle(QCoreApplication::translate("DialogStream", "Dialog", nullptr));
        label_stream_name->setText(QCoreApplication::translate("DialogStream", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\320\276\321\202\320\276\320\272\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogStream: public Ui_DialogStream {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_STREAM_H
