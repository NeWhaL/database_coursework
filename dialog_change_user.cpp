#include "dialog_change_user.h"
#include "ui_dialog_change_user.h"

DialogChangeUser::DialogChangeUser(QWidget *parent)
: QDialog(parent)
, _ui(new Ui::DialogChangeUser) {
    _ui->setupUi(this);
}

DialogChangeUser::~DialogChangeUser() {
    delete _ui;
}

User DialogChangeUser::get_user() const {
    return user;
}

void DialogChangeUser::accept() {
    QString login {_ui->line_edit_login->text()};
    QString password {_ui->line_edit_password->text()};
    QString title {"Пустое поле"};
    if (login.isEmpty()) {
        QMessageBox::warning(this, title, "Введите логин");
        return;
    } else if (password.isEmpty()) {
        QMessageBox::warning(this, title, "Введите пароль");
        return;
    }
    QSqlQuery query;
    query.prepare("select change_role(:login, :password);");
    query.bindValue(":login", login);
    query.bindValue(":password", password);
    if (query.exec()) {
        query.next();
        QString role {query.value(0).toString()};
        user._user_name = login;
        user._role = role;
        QMessageBox::information(this, "Смена пользователя", "Пользователь успешно сменён");
    } else {
        QMessageBox::warning(this, "Смена пользователя", "Некорректные данные пользователя");
        return;
    }
    QDialog::accept();
}
