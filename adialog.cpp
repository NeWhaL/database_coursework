#include "adialog.h"

ADialog::ADialog(QWidget* parent): QDialog(parent) {}

void ADialog::set_combo_box(QComboBox* combo_box,
                            const QString& table_name,
                            const QString& column_name) {
    QSqlQuery query;
    query.prepare("select distinct " + column_name + " from " +  table_name + ";");
    if (!query.exec()) {
        QMessageBox::critical(nullptr,
                              "",
                              "Не удалось записать данные в combo_box: " +
                              QString("table_name: " + table_name + ", column_name: " + column_name) +
                                  query.lastError().text());
        return;
    }
    QString data;
    QList<QVariant> items;
    while (query.next()) {
        for (int i {0}; i < query.record().count(); ++i) {
            items.append(query.value(i));
            if (query.value(i) == query.value("id"))
                continue;
            data += query.value(i).toString();
            if (i + 1 < query.record().count())
                data += " ";
        }
        combo_box->addItem(data);
        combo_box->setItemData(combo_box->count() - 1, items);
        data.clear();
        items.clear();
    }
    combo_box->setCurrentIndex(-1);
}
