#ifndef DATABASE_MANAGER_H
#define DATABASE_MANAGER_H

#include <QSqlDatabase>
#include <QSqlQuery>
#include <QSqlError>
#include <QSqlRecord>
#include <QDebug>
#include <QMessageBox>

class DatabaseManager
{
private:
    DatabaseManager();
    ~DatabaseManager();
    QSqlDatabase db;
    static DatabaseManager* _instance;
public:
    static DatabaseManager* instance();
    bool open_connection(const QString& host,
                         size_t port,
                         const QString& db_name,
                         const QString& user_name,
                         const QString& password);
    void close_connection();
    QSqlDatabase get_db() const;
};

#endif // DATABASE_MANAGER_H
