#include "test_form.h"
#include "ui_test_form.h"

test_form::test_form(QWidget *parent, ATableModel* model, QVector<int> hide_columns_index, User user)
: QWidget(parent)
, _ui(new Ui::test_form)
, _model(model)
, _filter(std::make_unique<SortFilter>(this))
, _user(user) {
    _ui->setupUi(this);
    _ui->combo_box_column_name->addItems(_model->headersData());
    _filter->setSourceModel(_model.get());
    _ui->table_view->setSortingEnabled(true);
    _ui->table_view->setModel(_filter.get());
    for (const auto i : hide_columns_index)
        _ui->table_view->hideColumn(i);
    for (int i {hide_columns_index.size() - 1}; i >= 0; --i)
        _ui->combo_box_column_name->removeItem(hide_columns_index[i]);
    _ui->table_view->show();
    _ui->combo_box_column_name->setCurrentIndex(-1);
    on_combo_box_changed(_ui->combo_box_column_name->currentIndex());
    update_pagination();
    //user
    if (!user.can_delete())
        _ui->remove_button->setEnabled(false);
    if (!user.can_insert_or_update()) {
        _ui->update_button->setEnabled(false);
        _ui->add_button->setEnabled(false);
    }
    connect(_ui->combo_box_column_name, SIGNAL(currentIndexChanged(int)), this, SLOT(on_combo_box_changed(int)));
    connect(_ui->combo_box_column_name, SIGNAL(currentTextChanged(const QString &)),
            this, SLOT(on_column_name_changed(const QString &)));
    connect(_ui->line_edit_column_data, SIGNAL(textChanged(const QString &)),
            this, SLOT(on_search_text_changed(const QString &)));
    connect(_ui->table_view->horizontalHeader(), &QHeaderView::sectionClicked, this, &test_form::column_sort);
    connect(_ui->line_edit_search, &QLineEdit::textChanged, this, &test_form::global_search);
}

void test_form::column_sort(int logical_index) {
    Qt::SortOrder current_order = _filter->sortOrder();
    _filter->sort(logical_index, current_order == Qt::AscendingOrder ? Qt::DescendingOrder : Qt::AscendingOrder);
}

void test_form::global_search(const QString& text) {
    _filter->setFilterRegExp(QRegExp(text, Qt::CaseInsensitive, QRegExp::Wildcard));
    update_pagination();
}

test_form::~test_form() {
    delete _ui;
}

void test_form::on_column_name_changed(const QString &columnName) {
    QString sub_string = _ui->line_edit_column_data->text();
    _model->filter_data(columnName, sub_string);
    update_pagination();
}

void test_form::on_search_text_changed(const QString &sub_string) {
    QString column_name = _ui->combo_box_column_name->currentText();
    _model->filter_data(column_name, sub_string);
    update_pagination();
}

void test_form::on_combo_box_changed(int index) {
    if (index == -1)
        _ui->line_edit_column_data->setDisabled(true);
    else
        _ui->line_edit_column_data->setEnabled(true);
    update_pagination();
}

void test_form::on_remove_button_clicked() {
    QModelIndexList selected_rows = _ui->table_view->selectionModel()->selectedRows();
    if (selected_rows.isEmpty()) {
        QMessageBox::warning(this, "Строка не выбрана", "Для удаления нужно выбрать строку или строки");
        return;
    }
    for (int i {selected_rows.size() - 1}; i >= 0; --i) {
        int row = selected_rows[i].row();
        QVariant primary_key_name = _model->data(_model->index(row, 0));
        if (primary_key_name.isValid()) {
            if (_model->remove(primary_key_name))
                _model->remove_row(selected_rows[i].row());
        }
    }
    update_pagination();
}

void test_form::on_add_button_clicked() {
    _model->modal_window_add(this);
    update_pagination();
}

void test_form::on_update_button_clicked() {
    QModelIndexList selected_rows = _ui->table_view->selectionModel()->selectedRows();
    if (selected_rows.isEmpty()) {
        QMessageBox::warning(this, "", "Не выбрана строка для изменения");
        return;
    }
    QMap<QString, QVariant> row_to_change;
    int row_index = selected_rows.first().row();
    for (int col = 0; col < _model->columnCount(); ++col) {
        QVariant value = _model->data(_model->index(row_index, col));
        row_to_change.insert(_model->headerData(col, Qt::Horizontal).toString(), value);
    }
    _model->modal_window_update(this, row_to_change, row_index);
}

void test_form::on_exit_button_clicked() {
    this->close();
}

void test_form::update_pagination() {
    size_t start_row = current_page * rows_per_page;
    size_t end_row = start_row + rows_per_page;
    for (int i = 0; i < _filter->rowCount(); ++i)
        _ui->table_view->setRowHidden(i, !(i >= start_row && i < end_row));
}

void test_form::on_push_button_prev_page_clicked() {
    if (current_page > 0) {
        --current_page;
        update_pagination();
    }
}

void test_form::on_push_button_next_page_clicked() {
    if ((current_page + 1) * rows_per_page < _filter->rowCount()) {
        ++current_page;
        update_pagination();
    }
}
