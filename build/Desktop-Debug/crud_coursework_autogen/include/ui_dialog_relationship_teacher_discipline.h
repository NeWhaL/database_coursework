/********************************************************************************
** Form generated from reading UI file 'dialog_relationship_teacher_discipline.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_RELATIONSHIP_TEACHER_DISCIPLINE_H
#define UI_DIALOG_RELATIONSHIP_TEACHER_DISCIPLINE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogRelationshipTeacherDiscipline
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_rel_teacher;
    QLabel *label_rel_discipline;
    QComboBox *combo_box_teacher;
    QComboBox *combo_box_discipline;

    void setupUi(QDialog *DialogRelationshipTeacherDiscipline)
    {
        if (DialogRelationshipTeacherDiscipline->objectName().isEmpty())
            DialogRelationshipTeacherDiscipline->setObjectName(QString::fromUtf8("DialogRelationshipTeacherDiscipline"));
        DialogRelationshipTeacherDiscipline->resize(885, 126);
        buttonBox = new QDialogButtonBox(DialogRelationshipTeacherDiscipline);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(370, 90, 171, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        formLayoutWidget = new QWidget(DialogRelationshipTeacherDiscipline);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 861, 71));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_rel_teacher = new QLabel(formLayoutWidget);
        label_rel_teacher->setObjectName(QString::fromUtf8("label_rel_teacher"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_rel_teacher);

        label_rel_discipline = new QLabel(formLayoutWidget);
        label_rel_discipline->setObjectName(QString::fromUtf8("label_rel_discipline"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_rel_discipline);

        combo_box_teacher = new QComboBox(formLayoutWidget);
        combo_box_teacher->setObjectName(QString::fromUtf8("combo_box_teacher"));

        formLayout->setWidget(0, QFormLayout::FieldRole, combo_box_teacher);

        combo_box_discipline = new QComboBox(formLayoutWidget);
        combo_box_discipline->setObjectName(QString::fromUtf8("combo_box_discipline"));

        formLayout->setWidget(1, QFormLayout::FieldRole, combo_box_discipline);


        retranslateUi(DialogRelationshipTeacherDiscipline);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogRelationshipTeacherDiscipline, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogRelationshipTeacherDiscipline, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogRelationshipTeacherDiscipline);
    } // setupUi

    void retranslateUi(QDialog *DialogRelationshipTeacherDiscipline)
    {
        DialogRelationshipTeacherDiscipline->setWindowTitle(QCoreApplication::translate("DialogRelationshipTeacherDiscipline", "Dialog", nullptr));
        label_rel_teacher->setText(QCoreApplication::translate("DialogRelationshipTeacherDiscipline", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        label_rel_discipline->setText(QCoreApplication::translate("DialogRelationshipTeacherDiscipline", "\320\224\320\270\321\201\321\206\320\270\320\277\320\273\320\270\320\275\320\260", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRelationshipTeacherDiscipline: public Ui_DialogRelationshipTeacherDiscipline {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_RELATIONSHIP_TEACHER_DISCIPLINE_H
