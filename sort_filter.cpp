#include "sort_filter.h"

SortFilter::SortFilter(QObject* parent)
: QSortFilterProxyModel(parent) {
    setDynamicSortFilter(true);
}

bool SortFilter::lessThan(const QModelIndex &source_left, const QModelIndex &source_right) const {
    QVariant left = sourceModel()->data(source_left);
    QVariant right = sourceModel()->data(source_right);
    switch (left.type()) {
    case QVariant::Int:
        return left.toInt() < right.toInt();
    case QVariant::Double:
        return left.toDouble() < right.toDouble();
    default:
        return left.toString() < right.toString();
    }
}


bool SortFilter::filterAcceptsRow(int source_row, const QModelIndex &source_parent) const {
    for (int column = 0; column < sourceModel()->columnCount(source_parent); ++column) {
        QModelIndex index = sourceModel()->index(source_row, column, source_parent);
        QString cellData = index.data().toString();
        if (cellData.contains(filterRegExp())) {
            return true;
        }
    }
    return false;
}
