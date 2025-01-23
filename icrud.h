#ifndef ICRUD_H
#define ICRUD_H

#include <QVariant>

class Icrud
{
public:
    Icrud() = default;
    virtual ~Icrud() = default;
    virtual bool insert(QVector<QVariant>& new_row) = 0;
    virtual bool remove(QVariant primary_key_name) = 0;
    virtual bool update(QVector<QVariant>& row_to_change, QString old_primary_key) = 0;
};

#endif // ICRUD_H
