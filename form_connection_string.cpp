#include "form_connection_string.h"
#include "ui_form_connection_string.h"

FormConnectionString::FormConnectionString(QWidget *parent)
: QWidget(parent)
, _ui(new Ui::FormConnectionString) {
    _ui->setupUi(this);
}

FormConnectionString::~FormConnectionString() {
    delete _ui;
}

void FormConnectionString::on_push_button_connect_clicked() {
    QMap<QString, QString> connection {
        {"ip", _ui->line_edit_ip->text()},
        {"db_name", _ui->line_edit_db_name->text()},
        {"port", _ui->line_edit_port->text()},
        {"user_name", _ui->line_edit_user_name->text()},
        {"password", _ui->line_edit_password->text()}
    };
    QString title {"Поле не задано"};
    if (connection["ip"].isEmpty()) {
        QMessageBox::warning(this, title, "Введите ip-адрес базы данных");
        return;
    } else if (connection["db_name"].isEmpty()) {
        QMessageBox::warning(this, title, "Введите название базы данных");
        return;
    } else if (connection["port"].isEmpty()) {
        QMessageBox::warning(this, title, "Введите порт базы данных");
        return;
    } else if (connection["user_name"].isEmpty()) {
        QMessageBox::warning(this, title, "введите имя пользователя");
        return;
    } else if (connection["password"].isEmpty()) {
        QMessageBox::warning(this, title, "введите пароль");
        return;
    }
    bool is_int;
    int port {connection["port"].toInt(&is_int)};
    if (!is_int) {
        QMessageBox::warning(this, "Некорректное поле", "порт должен быть целочисленным");
        return;
    }
    auto db_manager = DatabaseManager::instance();
    if (!db_manager->open_connection(connection["ip"],
                                     port,
                                     connection["db_name"],
                                     connection["user_name"],
                                     connection["password"])) {
        QMessageBox::critical(nullptr,
                              "Не удалось войти в базу данных",
                              "Не удалось войти в базу данных: " + db_manager->get_db().lastError().text());
        return;
    }
    this->close();
    FormMenu* form_menu {new FormMenu};
    form_menu->show();
}

