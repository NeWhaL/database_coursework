#include "dialog_lecture.h"
#include "ui_dialog_lecture.h"

DialogLecture::DialogLecture(QWidget *parent)
: ADialog(parent)
, _ui(new Ui::DialogLecture) {
    _ui->setupUi(this);
    set_all_combo_box();
    set_date_format();
    connect(_ui->combo_box_discipline_name,
            &QComboBox::textActivated,
            this,
            &DialogLecture::set_combo_box_teacher);
}

DialogLecture::DialogLecture(QWidget *parent, QMap<QString, QVariant>& row_to_change)
: ADialog(parent)
, _ui(new Ui::DialogLecture) {
    _ui->setupUi(this);
    set_all_combo_box();
    set_date_format();
    connect(_ui->combo_box_discipline_name,
            &QComboBox::textActivated,
            this,
            &DialogLecture::set_combo_box_teacher);
    _ui->combo_box_teacher->setEnabled(true);
    set_combo_box_teacher(row_to_change["discipline_name"].toString());
    _ui->combo_box_teacher->setCurrentText(row_to_change["surname"].toString() + " " +
                                           row_to_change["name"].toString() + " " +
                                           row_to_change["patronymic"].toString());
    _ui->combo_box_auditorium->setCurrentText(row_to_change["building_number"].toString() + " " +
                                              row_to_change["audience_name"].toString());
    _ui->combo_box_discipline_name->setCurrentText(row_to_change["discipline_name"].toString());
    _ui->combo_box_stream_name->setCurrentText(row_to_change["stream_name"].toString());
    _ui->date_time_edit_start_lecture->setDateTime(row_to_change["date_start"].toDateTime());
    _ui->date_time_edit_end_lecture->setDateTime(row_to_change["date_end"].toDateTime());
}

DialogLecture::~DialogLecture() {
    delete _ui;
}

void DialogLecture::set_date_format() {
    const QString date_format {"yyyy-MM-dd HH:mm:ss"};
    _ui->date_time_edit_start_lecture->setDisplayFormat(date_format);
    _ui->date_time_edit_end_lecture->setDisplayFormat(date_format);
}

void DialogLecture::set_combo_box_teacher(const QString& discipline_name) {
    _ui->combo_box_teacher->setEnabled(true);
    _ui->combo_box_teacher->clear();
    QSqlQuery query;
    query.prepare("select t.id, t.surname, t.name, t.patronymic "
                  "from relationship_teacher_discipline rtd "
                  "join teacher t on t.id = rtd.teacher_id "
                  "where rtd.discipline_name = :d_name;");
    query.bindValue(":d_name", discipline_name);
    if (query.exec()) {
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
            _ui->combo_box_teacher->addItem(data);
            _ui->combo_box_teacher->setItemData(_ui->combo_box_teacher->count() - 1, items);
            data.clear();
            items.clear();
        }
        _ui->combo_box_teacher->setCurrentIndex(-1);
    }
}

void DialogLecture::set_all_combo_box() {
    set_combo_box(_ui->combo_box_stream_name, "stream", "name");
    set_combo_box(_ui->combo_box_discipline_name, "discipline", "name");
    set_combo_box(_ui->combo_box_auditorium, "auditorium", "id, building_number, audience_name");
    _ui->combo_box_teacher->setEnabled(false);
}

void DialogLecture::accept() {
    const QString warning_name {"Не выбрано поле"};
    if (_ui->combo_box_stream_name->currentIndex() == -1) {
        QMessageBox::warning(this, warning_name, "Не выбрано название потока");
        return;
    }
    if (_ui->combo_box_discipline_name->currentIndex() == -1) {
        QMessageBox::warning(this, warning_name, "Не выбрано название дисциплины");
        return;
    }
    if (_ui->combo_box_auditorium->currentIndex() == -1) {
        QMessageBox::warning(this, warning_name, "Не выбрана аудитория");
        return;
    }
    if (_ui->combo_box_teacher->currentIndex() == -1) {
        QMessageBox::warning(this, warning_name, "Не выбран преподаватель");
        return;
    }
    QDialog::accept();
}

QVector<QVariant> DialogLecture::get_data() {
    return {
        _ui->combo_box_auditorium->currentData().toList()[0],
        _ui->combo_box_teacher->currentData().toList()[0],
        _ui->combo_box_discipline_name->currentText(),
        _ui->combo_box_stream_name->currentText(),
        _ui->date_time_edit_start_lecture->dateTime(),
        _ui->date_time_edit_end_lecture->dateTime(),
        _ui->combo_box_auditorium->currentData().toList()[1],
        _ui->combo_box_auditorium->currentData().toList()[2],
        _ui->combo_box_teacher->currentData().toList()[1],
        _ui->combo_box_teacher->currentData().toList()[2],
        _ui->combo_box_teacher->currentData().toList()[3]
    };
}
