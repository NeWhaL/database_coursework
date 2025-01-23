#include "dialog_stream.h"
#include "ui_dialog_stream.h"

DialogStream::DialogStream(QWidget *parent)
    : ADialog(parent)
    , _ui(new Ui::DialogStream) {
    _ui->setupUi(this);
}

DialogStream::DialogStream(QWidget *parent, QMap<QString, QVariant>& row_to_change)
    : ADialog(parent)
    , _ui(new Ui::DialogStream) {
    _ui->setupUi(this);
    _ui->line_edit_stream_name->setText(row_to_change["name"].toString());
}

DialogStream::~DialogStream() {
    delete _ui;
}

void DialogStream::accept() {
    if (_ui->line_edit_stream_name->text().isEmpty()) {
        QMessageBox::critical(this,
                              "Некорректное поле",
                              "Пустое поле");
        return;
    }
    QDialog::accept();
}

QVector<QVariant> DialogStream::get_data() {
    return {
        _ui->line_edit_stream_name->text()
    };
}
