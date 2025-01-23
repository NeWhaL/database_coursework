/********************************************************************************
** Form generated from reading UI file 'test_form.ui'
**
** Created by: Qt User Interface Compiler version 5.15.16
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_TEST_FORM_H
#define UI_TEST_FORM_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QTableView>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_test_form
{
public:
    QTableView *table_view;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QPushButton *add_button;
    QPushButton *update_button;
    QPushButton *remove_button;
    QPushButton *exit_button;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QComboBox *combo_box_column_name;
    QLineEdit *line_edit_column_data;
    QLineEdit *line_edit_search;
    QWidget *horizontalLayoutWidget_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *push_button_prev_page;
    QPushButton *push_button_next_page;

    void setupUi(QWidget *test_form)
    {
        if (test_form->objectName().isEmpty())
            test_form->setObjectName(QString::fromUtf8("test_form"));
        test_form->resize(917, 566);
        table_view = new QTableView(test_form);
        table_view->setObjectName(QString::fromUtf8("table_view"));
        table_view->setGeometry(QRect(10, 100, 901, 411));
        horizontalLayoutWidget = new QWidget(test_form);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(10, 520, 901, 41));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        add_button = new QPushButton(horizontalLayoutWidget);
        add_button->setObjectName(QString::fromUtf8("add_button"));
        add_button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(add_button);

        update_button = new QPushButton(horizontalLayoutWidget);
        update_button->setObjectName(QString::fromUtf8("update_button"));

        horizontalLayout->addWidget(update_button);

        remove_button = new QPushButton(horizontalLayoutWidget);
        remove_button->setObjectName(QString::fromUtf8("remove_button"));
        remove_button->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout->addWidget(remove_button);

        exit_button = new QPushButton(horizontalLayoutWidget);
        exit_button->setObjectName(QString::fromUtf8("exit_button"));

        horizontalLayout->addWidget(exit_button);

        verticalLayoutWidget = new QWidget(test_form);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 207, 89));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        combo_box_column_name = new QComboBox(verticalLayoutWidget);
        combo_box_column_name->setObjectName(QString::fromUtf8("combo_box_column_name"));

        verticalLayout->addWidget(combo_box_column_name);

        line_edit_column_data = new QLineEdit(verticalLayoutWidget);
        line_edit_column_data->setObjectName(QString::fromUtf8("line_edit_column_data"));

        verticalLayout->addWidget(line_edit_column_data);

        line_edit_search = new QLineEdit(verticalLayoutWidget);
        line_edit_search->setObjectName(QString::fromUtf8("line_edit_search"));

        verticalLayout->addWidget(line_edit_search);

        horizontalLayoutWidget_2 = new QWidget(test_form);
        horizontalLayoutWidget_2->setObjectName(QString::fromUtf8("horizontalLayoutWidget_2"));
        horizontalLayoutWidget_2->setGeometry(QRect(797, 60, 111, 36));
        horizontalLayout_2 = new QHBoxLayout(horizontalLayoutWidget_2);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        push_button_prev_page = new QPushButton(horizontalLayoutWidget_2);
        push_button_prev_page->setObjectName(QString::fromUtf8("push_button_prev_page"));
        QFont font;
        font.setPointSize(10);
        font.setBold(true);
        push_button_prev_page->setFont(font);
        push_button_prev_page->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(push_button_prev_page);

        push_button_next_page = new QPushButton(horizontalLayoutWidget_2);
        push_button_next_page->setObjectName(QString::fromUtf8("push_button_next_page"));
        push_button_next_page->setFont(font);
        push_button_next_page->setCursor(QCursor(Qt::PointingHandCursor));

        horizontalLayout_2->addWidget(push_button_next_page);


        retranslateUi(test_form);

        QMetaObject::connectSlotsByName(test_form);
    } // setupUi

    void retranslateUi(QWidget *test_form)
    {
        test_form->setWindowTitle(QCoreApplication::translate("test_form", "Form", nullptr));
        add_button->setText(QCoreApplication::translate("test_form", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
        update_button->setText(QCoreApplication::translate("test_form", "\320\230\320\267\320\274\320\265\320\275\320\270\321\202\321\214", nullptr));
        remove_button->setText(QCoreApplication::translate("test_form", "\320\243\320\264\320\260\320\273\320\270\321\202\321\214", nullptr));
        exit_button->setText(QCoreApplication::translate("test_form", "\320\222\321\213\321\205\320\276\320\264", nullptr));
        combo_box_column_name->setPlaceholderText(QCoreApplication::translate("test_form", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\272\320\276\320\273\320\276\320\275\320\272\320\270 \320\264\320\273\321\217 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        line_edit_column_data->setPlaceholderText(QCoreApplication::translate("test_form", "\320\241\321\202\321\200\320\276\320\272\320\260 \320\264\320\273\321\217 \320\277\320\276\320\270\321\201\320\272\320\260", nullptr));
        line_edit_search->setPlaceholderText(QCoreApplication::translate("test_form", "\320\223\320\273\320\276\320\261\320\260\320\273\321\214\320\275\321\213\320\271 \320\277\320\276\320\270\321\201\320\272", nullptr));
        push_button_prev_page->setText(QCoreApplication::translate("test_form", "<", nullptr));
        push_button_next_page->setText(QCoreApplication::translate("test_form", ">", nullptr));
    } // retranslateUi

};

namespace Ui {
    class test_form: public Ui_test_form {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_TEST_FORM_H
