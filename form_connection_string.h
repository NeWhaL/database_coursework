#ifndef FORM_CONNECTION_STRING_H
#define FORM_CONNECTION_STRING_H

#include <QWidget>
#include <QMessageBox>
#include "database_manager.h"
#include "form_menu.h"

namespace Ui {
class FormConnectionString;
}

class FormConnectionString : public QWidget
{
    Q_OBJECT

public:
    explicit FormConnectionString(QWidget *parent = nullptr);
    ~FormConnectionString();

private slots:
    void on_push_button_connect_clicked();

private:
    Ui::FormConnectionString *_ui;
};

#endif // FORM_CONNECTION_STRING_H
