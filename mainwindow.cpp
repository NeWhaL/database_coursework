#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include <QMessageBox>

MainWindow::MainWindow(QWidget *parent)
try
: QMainWindow(parent)
, ui(new Ui::MainWindow) {
    ui->setupUi(this);
} catch (const std::exception& ex) {
    QMessageBox::critical(this, "Не удалось открыть бд", QString("Не удалось открыть базу данных: ") + ex.what());
}

MainWindow::~MainWindow() {
    delete ui;
}


void MainWindow::on_enter_button_clicked() {
    // try {
    //     if (db_connection.is_open()) {
    //         std::string login = ui->line_edit_login->text().toStdString();
    //         std::string password = ui->line_edit_password->text().toStdString();
    //         pqxx::work trx(db_connection);
    //         pqxx::result result = trx.exec(std::string("select * from users where login = \'") + login + "\';");
    //         if (result.empty()) {
    //             QMessageBox::warning(this, "Пользователь не найден", QString("Нет пользователя с логином ") + QString(login.c_str()));
    //             ui->line_edit_login->clear();
    //             ui->line_edit_password->clear();
    //             return;
    //         }
    //         auto user = result.front();
    //         if (user["pass"].as<std::string>() == password) {
    //             QMessageBox::information(this, "Успех", "Вход произведен успешно");
    //             return;
    //         }
    //         QMessageBox::warning(this, "Неверный пароль", "Неверный пароль");
    //         ui->line_edit_password->clear();
    //     }
    //     else
    //         QMessageBox::critical(this, "Неудачное открытие", "База данных не открылась");
    // } catch (const std::exception& ex) {
    //     QMessageBox::about(this, "", ex.what());
    // }
}

void MainWindow::on_pushButton_clicked() {
    // try {
    //     pqxx::connection db_connection("dbname=lectures_database user=postgres password=postgres port=5432");
    //     if (db_connection.is_open()) {
    //         std::string login = ui->line_edit_login->text().toStdString();
    //         std::string password = ui->line_edit_password->text().toStdString();
    //         pqxx::work trx(db_connection);
    //         trx.exec(std::string("insert into users(login, pass) VALUES(\'") + login + "\', \'" + password + "\');");
    //         trx.commit();
    //     }
    //     else
    //         QMessageBox::critical(this, "Неудачное открытие", "База данных не открылась");
    // } catch (const std::exception& ex) {
    //     QMessageBox::critical(this, "", ex.what());
    // }
}

