#ifndef ADIALOG_H
#define ADIALOG_H

#include <QDialog>
#include <QComboBox>
#include <QMessageBox>
#include "database_manager.h"

class ADialog : public QDialog
{
protected:
    Q_OBJECT;
public:
    ADialog(QWidget* parent = nullptr);
    virtual ~ADialog() = default;
    virtual void set_combo_box(QComboBox* combo_box, const QString& table_name, const QString& column_name);
    virtual QVector<QVariant> get_data() = 0;
};

#endif // ADIALOG_H
