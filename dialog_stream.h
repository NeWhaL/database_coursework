#ifndef DIALOG_STREAM_H
#define DIALOG_STREAM_H

#include "adialog.h"

namespace Ui {
class DialogStream;
}

class DialogStream : public ADialog
{
public:
    explicit DialogStream(QWidget *parent = nullptr);
    ~DialogStream();
    explicit DialogStream(QWidget *parent, QMap<QString, QVariant>& row_to_change);
    void accept() override;
    QVector<QVariant> get_data() override;

private:
    Ui::DialogStream *_ui;
};

#endif // DIALOG_STREAM_H
