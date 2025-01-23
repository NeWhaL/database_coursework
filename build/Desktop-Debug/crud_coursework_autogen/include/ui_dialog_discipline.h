/********************************************************************************
** Form generated from reading UI file 'dialog_discipline.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_DISCIPLINE_H
#define UI_DIALOG_DISCIPLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogDiscipline
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *discipline_name;
    QLineEdit *discipline_amount_hours;
    QLineEdit *discipline_cycle;

    void setupUi(QDialog *DialogDiscipline)
    {
        if (DialogDiscipline->objectName().isEmpty())
            DialogDiscipline->setObjectName(QString::fromUtf8("DialogDiscipline"));
        DialogDiscipline->resize(531, 158);
        buttonBox = new QDialogButtonBox(DialogDiscipline);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(350, 120, 171, 32));
        buttonBox->setCursor(QCursor(Qt::ArrowCursor));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        formLayoutWidget = new QWidget(DialogDiscipline);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 511, 101));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label = new QLabel(formLayoutWidget);
        label->setObjectName(QString::fromUtf8("label"));
        QFont font;
        font.setPointSize(12);
        label->setFont(font);

        formLayout->setWidget(0, QFormLayout::LabelRole, label);

        label_2 = new QLabel(formLayoutWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setFont(font);

        formLayout->setWidget(1, QFormLayout::LabelRole, label_2);

        label_3 = new QLabel(formLayoutWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setFont(font);

        formLayout->setWidget(2, QFormLayout::LabelRole, label_3);

        discipline_name = new QLineEdit(formLayoutWidget);
        discipline_name->setObjectName(QString::fromUtf8("discipline_name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, discipline_name);

        discipline_amount_hours = new QLineEdit(formLayoutWidget);
        discipline_amount_hours->setObjectName(QString::fromUtf8("discipline_amount_hours"));

        formLayout->setWidget(1, QFormLayout::FieldRole, discipline_amount_hours);

        discipline_cycle = new QLineEdit(formLayoutWidget);
        discipline_cycle->setObjectName(QString::fromUtf8("discipline_cycle"));

        formLayout->setWidget(2, QFormLayout::FieldRole, discipline_cycle);


        retranslateUi(DialogDiscipline);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogDiscipline, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogDiscipline, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogDiscipline);
    } // setupUi

    void retranslateUi(QDialog *DialogDiscipline)
    {
        DialogDiscipline->setWindowTitle(QCoreApplication::translate("DialogDiscipline", "Dialog", nullptr));
        label->setText(QCoreApplication::translate("DialogDiscipline", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\321\213", nullptr));
        label_2->setText(QCoreApplication::translate("DialogDiscipline", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \321\207\320\260\321\201\320\276\320\262", nullptr));
        label_3->setText(QCoreApplication::translate("DialogDiscipline", "\320\246\320\270\320\272\320\273 \320\264\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogDiscipline: public Ui_DialogDiscipline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_DISCIPLINE_H
