/********************************************************************************
** Form generated from reading UI file 'dialog_relationship_stream_group.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_RELATIONSHIP_STREAM_GROUP_H
#define UI_DIALOG_RELATIONSHIP_STREAM_GROUP_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogRelationshipStremGroup
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_relationship_stream_name;
    QLabel *label_relationship_group_name;
    QComboBox *combo_box_relationship_stream_name;
    QComboBox *combo_box_relationship_group_name;

    void setupUi(QDialog *DialogRelationshipStremGroup)
    {
        if (DialogRelationshipStremGroup->objectName().isEmpty())
            DialogRelationshipStremGroup->setObjectName(QString::fromUtf8("DialogRelationshipStremGroup"));
        DialogRelationshipStremGroup->resize(400, 119);
        buttonBox = new QDialogButtonBox(DialogRelationshipStremGroup);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 80, 171, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        formLayoutWidget = new QWidget(DialogRelationshipStremGroup);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 61));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_relationship_stream_name = new QLabel(formLayoutWidget);
        label_relationship_stream_name->setObjectName(QString::fromUtf8("label_relationship_stream_name"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_relationship_stream_name);

        label_relationship_group_name = new QLabel(formLayoutWidget);
        label_relationship_group_name->setObjectName(QString::fromUtf8("label_relationship_group_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_relationship_group_name);

        combo_box_relationship_stream_name = new QComboBox(formLayoutWidget);
        combo_box_relationship_stream_name->setObjectName(QString::fromUtf8("combo_box_relationship_stream_name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, combo_box_relationship_stream_name);

        combo_box_relationship_group_name = new QComboBox(formLayoutWidget);
        combo_box_relationship_group_name->setObjectName(QString::fromUtf8("combo_box_relationship_group_name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, combo_box_relationship_group_name);


        retranslateUi(DialogRelationshipStremGroup);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogRelationshipStremGroup, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogRelationshipStremGroup, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogRelationshipStremGroup);
    } // setupUi

    void retranslateUi(QDialog *DialogRelationshipStremGroup)
    {
        DialogRelationshipStremGroup->setWindowTitle(QCoreApplication::translate("DialogRelationshipStremGroup", "Dialog", nullptr));
        label_relationship_stream_name->setText(QCoreApplication::translate("DialogRelationshipStremGroup", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\320\276\321\202\320\276\320\272\320\260", nullptr));
        label_relationship_group_name->setText(QCoreApplication::translate("DialogRelationshipStremGroup", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\263\321\200\321\203\320\277\320\277\321\213", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogRelationshipStremGroup: public Ui_DialogRelationshipStremGroup {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_RELATIONSHIP_STREAM_GROUP_H
