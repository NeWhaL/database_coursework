#ifndef TEST_FORM_H
#define TEST_FORM_H

#include <QWidget>
#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlRelationalTableModel>
#include <QTableView>
#include <QDebug>
#include <QMessageBox>
#include "user.h"
#include "atablemodel.h"
#include "sort_filter.h"
#include "adialog.h"

namespace Ui {
class test_form;
}

class test_form : public QWidget
{
    Q_OBJECT

public:
    explicit test_form(QWidget *parent = nullptr,
                       ATableModel* model = nullptr,
                       QVector<int> hide_columns_index = QVector<int>(),
                       User user = User());
    ~test_form();

private slots:
    void on_remove_button_clicked();
    void on_add_button_clicked();
    void on_update_button_clicked();
    void on_exit_button_clicked();
    void on_combo_box_changed(int index);
    void on_column_name_changed(const QString &);
    void on_search_text_changed(const QString &);

    void on_push_button_prev_page_clicked();

    void on_push_button_next_page_clicked();

private:
    void global_search(const QString& text);
    void column_sort(int logical_index);
    void update_pagination();

    Ui::test_form *_ui;
    std::unique_ptr<SortFilter> _filter;
    std::shared_ptr<ATableModel> _model;
    User _user;
    size_t current_page = 0;
    size_t rows_per_page = 12;
};

#endif // TEST_FORM_H
