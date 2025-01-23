#ifndef SORT_FILTER_H
#define SORT_FILTER_H

#include <QSortFilterProxyModel>
#include "atablemodel.h"

class SortFilter : public QSortFilterProxyModel {
    Q_OBJECT;
public:
    using QSortFilterProxyModel::QSortFilterProxyModel;
    explicit SortFilter(QObject* parent = nullptr);
    bool lessThan(const QModelIndex &source_left, const QModelIndex &source_right) const override;
    bool filterAcceptsRow(int source_row, const QModelIndex &source_parent) const override;
};

#endif // SORT_FILTER_H
