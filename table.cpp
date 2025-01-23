#include "table.h"
#include "ui_table.h"

Table::Table(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::Table)
    , _table_model(new table_model())
{
    ui->setupUi(this);
}

Table::~Table()
{
    delete _table_model;
    delete ui;
}

void Table::on_pushButton_clicked() {
    using namespace pqxx;
    connection conn("dbname=lectures_database user=postgres password=postgres port=5432");
    work txn(conn);
    _table_model->setDataFromPqxxResult(txn.exec("select * from \"teacher\""));
    ui->tableView->setModel(_table_model);
}
