#ifndef CCIMAGEVIEWLIST_H
#define CCIMAGEVIEWLIST_H

#include <QListView>

class CCImageViewList : public QListView
{
    Q_OBJECT
public:
    explicit CCImageViewList(QWidget *parent = 0);

signals:

public slots:
    void onenter(const QModelIndex& index);
    void onleave();
    void leaveEvent(QEvent *);
private:
    int m_lastrow;
    int m_lastcolumn;
    QWidget* m_customwidget;

};

#endif // CCIMAGEVIEWLIST_H
