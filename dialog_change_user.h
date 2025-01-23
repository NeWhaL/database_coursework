#ifndef DIALOG_CHANGE_USER_H
#define DIALOG_CHANGE_USER_H

#include <QDialog>
#include <QMessageBox>
#include "database_manager.h"
#include "user.h"

namespace Ui {
class DialogChangeUser;
}

class DialogChangeUser : public QDialog
{
    Q_OBJECT

public:
    explicit DialogChangeUser(QWidget *parent = nullptr);
    ~DialogChangeUser();
    void accept() override;
    User get_user() const;

private:
    User user;
    Ui::DialogChangeUser *_ui;
};

#endif // DIALOG_CHANGE_USER_H
