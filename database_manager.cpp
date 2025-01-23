#include "database_manager.h"

DatabaseManager* DatabaseManager::_instance { nullptr };

DatabaseManager::DatabaseManager() {
    db = QSqlDatabase::addDatabase("QPSQL");
}

DatabaseManager::~DatabaseManager() {
    close_connection();
}

DatabaseManager* DatabaseManager::instance() {
    if (!_instance)
        _instance = new DatabaseManager();
    return _instance;
}

bool DatabaseManager::open_connection(const QString& host_name,
                                      size_t port,
                                      const QString& db_name,
                                      const QString& user_name,
                                      const QString& password) {
    db.setHostName(host_name);
    db.setDatabaseName(db_name);
    db.setPassword(password);
    db.setPort(port);
    db.setUserName(user_name);
    return db.open();
}

void DatabaseManager::close_connection() {
    if (!db.isOpen())
        return;
    db.close();
}

QSqlDatabase DatabaseManager::get_db() const {
    return db;
}
