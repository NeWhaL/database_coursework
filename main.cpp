#include "mainwindow.h"

#include <QApplication>
#include "form_connection_string.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    FormConnectionString window_connection_string;
    window_connection_string.show();
    // FormMenu window_menu;
    // window_menu.show();

    // auto model = new ModelTableLecture();
    // test_form tf(nullptr, model, {0, 1, 2, 3});
    // tf.show();
    return a.exec();
}
