/********************************************************************************
** Form generated from reading UI file 'dialog_lecture.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_DIALOG_LECTURE_H
#define UI_DIALOG_LECTURE_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateTimeEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QFormLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_DialogLecture
{
public:
    QDialogButtonBox *buttonBox;
    QWidget *formLayoutWidget;
    QFormLayout *formLayout;
    QLabel *label_stream_name;
    QLabel *label_date_start;
    QLabel *label_date_end;
    QLabel *label_discipline_name;
    QLabel *label_teacher;
    QLabel *label_auditorium;
    QComboBox *combo_box_stream_name;
    QComboBox *combo_box_discipline_name;
    QComboBox *combo_box_teacher;
    QComboBox *combo_box_auditorium;
    QDateTimeEdit *date_time_edit_start_lecture;
    QDateTimeEdit *date_time_edit_end_lecture;

    void setupUi(QDialog *DialogLecture)
    {
        if (DialogLecture->objectName().isEmpty())
            DialogLecture->setObjectName(QString::fromUtf8("DialogLecture"));
        DialogLecture->resize(400, 244);
        buttonBox = new QDialogButtonBox(DialogLecture);
        buttonBox->setObjectName(QString::fromUtf8("buttonBox"));
        buttonBox->setGeometry(QRect(220, 210, 171, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        formLayoutWidget = new QWidget(DialogLecture);
        formLayoutWidget->setObjectName(QString::fromUtf8("formLayoutWidget"));
        formLayoutWidget->setGeometry(QRect(10, 10, 381, 191));
        formLayout = new QFormLayout(formLayoutWidget);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setContentsMargins(0, 0, 0, 0);
        label_stream_name = new QLabel(formLayoutWidget);
        label_stream_name->setObjectName(QString::fromUtf8("label_stream_name"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_stream_name);

        label_date_start = new QLabel(formLayoutWidget);
        label_date_start->setObjectName(QString::fromUtf8("label_date_start"));

        formLayout->setWidget(4, QFormLayout::LabelRole, label_date_start);

        label_date_end = new QLabel(formLayoutWidget);
        label_date_end->setObjectName(QString::fromUtf8("label_date_end"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label_date_end);

        label_discipline_name = new QLabel(formLayoutWidget);
        label_discipline_name->setObjectName(QString::fromUtf8("label_discipline_name"));

        formLayout->setWidget(1, QFormLayout::LabelRole, label_discipline_name);

        label_teacher = new QLabel(formLayoutWidget);
        label_teacher->setObjectName(QString::fromUtf8("label_teacher"));

        formLayout->setWidget(2, QFormLayout::LabelRole, label_teacher);

        label_auditorium = new QLabel(formLayoutWidget);
        label_auditorium->setObjectName(QString::fromUtf8("label_auditorium"));

        formLayout->setWidget(3, QFormLayout::LabelRole, label_auditorium);

        combo_box_stream_name = new QComboBox(formLayoutWidget);
        combo_box_stream_name->setObjectName(QString::fromUtf8("combo_box_stream_name"));

        formLayout->setWidget(0, QFormLayout::FieldRole, combo_box_stream_name);

        combo_box_discipline_name = new QComboBox(formLayoutWidget);
        combo_box_discipline_name->setObjectName(QString::fromUtf8("combo_box_discipline_name"));

        formLayout->setWidget(1, QFormLayout::FieldRole, combo_box_discipline_name);

        combo_box_teacher = new QComboBox(formLayoutWidget);
        combo_box_teacher->setObjectName(QString::fromUtf8("combo_box_teacher"));

        formLayout->setWidget(2, QFormLayout::FieldRole, combo_box_teacher);

        combo_box_auditorium = new QComboBox(formLayoutWidget);
        combo_box_auditorium->setObjectName(QString::fromUtf8("combo_box_auditorium"));

        formLayout->setWidget(3, QFormLayout::FieldRole, combo_box_auditorium);

        date_time_edit_start_lecture = new QDateTimeEdit(formLayoutWidget);
        date_time_edit_start_lecture->setObjectName(QString::fromUtf8("date_time_edit_start_lecture"));

        formLayout->setWidget(4, QFormLayout::FieldRole, date_time_edit_start_lecture);

        date_time_edit_end_lecture = new QDateTimeEdit(formLayoutWidget);
        date_time_edit_end_lecture->setObjectName(QString::fromUtf8("date_time_edit_end_lecture"));

        formLayout->setWidget(5, QFormLayout::FieldRole, date_time_edit_end_lecture);


        retranslateUi(DialogLecture);
        QObject::connect(buttonBox, SIGNAL(accepted()), DialogLecture, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), DialogLecture, SLOT(reject()));

        QMetaObject::connectSlotsByName(DialogLecture);
    } // setupUi

    void retranslateUi(QDialog *DialogLecture)
    {
        DialogLecture->setWindowTitle(QCoreApplication::translate("DialogLecture", "Dialog", nullptr));
        label_stream_name->setText(QCoreApplication::translate("DialogLecture", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\320\276\321\202\320\276\320\272\320\260", nullptr));
        label_date_start->setText(QCoreApplication::translate("DialogLecture", "\320\224\320\260\321\202\320\260 \320\275\320\260\321\207\320\260\320\273\320\260 \320\273\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_date_end->setText(QCoreApplication::translate("DialogLecture", "\320\224\320\260\321\202\320\260 \320\272\320\276\320\275\321\206\320\260 \320\273\320\265\320\272\321\206\320\270\320\270", nullptr));
        label_discipline_name->setText(QCoreApplication::translate("DialogLecture", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\321\200\320\265\320\264\320\274\320\265\321\202\320\260", nullptr));
        label_teacher->setText(QCoreApplication::translate("DialogLecture", "\320\237\321\200\320\265\320\277\320\276\320\264\320\260\320\262\320\260\321\202\320\265\320\273\321\214", nullptr));
        label_auditorium->setText(QCoreApplication::translate("DialogLecture", "\320\220\321\203\320\264\320\270\321\202\320\276\321\200\320\270\321\217", nullptr));
    } // retranslateUi

};

namespace Ui {
    class DialogLecture: public Ui_DialogLecture {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_DIALOG_LECTURE_H
