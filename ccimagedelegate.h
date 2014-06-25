#ifndef CCIMAGEDELEGATE_H
#define CCIMAGEDELEGATE_H

#include <QStyledItemDelegate>

class CCImageDelegate : public QStyledItemDelegate
{
    Q_OBJECT
public:
    explicit CCImageDelegate(QObject *parent = 0);

    QWidget* createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const;
    void updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const;
signals:

public slots:

};

#endif // CCIMAGEDELEGATE_H
