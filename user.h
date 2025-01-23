#ifndef USER_H
#define USER_H

#include <QString>

class User
{
public:
    QString _user_name;
    QString _role;
    User(): _user_name("test_admin"), _role("admin") {}
    User(const QString& user_name, const QString& role): _user_name{user_name}, _role{role} {}

    bool can_delete() const {
        return _role == "admin";
    }

    bool can_insert_or_update() const {
        return _role == "admin" || _role == "editor";
    }
};

#endif // USER_H
