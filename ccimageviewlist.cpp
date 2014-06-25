#include "ccimageviewlist.h"
#include <QDebug>
#include <QPushButton>

CCImageViewList::CCImageViewList(QWidget *parent) :
    QListView(parent),
    m_lastrow(0),
    m_lastcolumn(0),
    m_customwidget(new QPushButton(this))
{
    setMouseTracking(true);
    connect(this,SIGNAL(entered(const QModelIndex&)),this,SLOT(onenter(const QModelIndex&)));
    connect(this,SIGNAL(viewportEntered()),this,SLOT(onleave()));

}

void CCImageViewList::onenter(const QModelIndex& index)
{
    QRect itemrect;
    itemrect=rectForIndex(index);
    m_customwidget->setGeometry(itemrect);
    m_customwidget->show();
    QModelIndex lastindex=model()->index(m_lastrow,m_lastcolumn);
    model()->setData(lastindex,QString("0"));
    QString randnum;
    randnum=QString("%1").arg(rand());
    model()->setData(index,randnum);
    m_lastrow=index.row();
    m_lastcolumn=index.column();


}

void CCImageViewList::onleave()
{
    QModelIndex lastindex=model()->index(m_lastrow,m_lastcolumn);
    model()->setData(lastindex,QString("0"));
    m_customwidget->hide();
}

void CCImageViewList::leaveEvent(QEvent *e)
{
    onleave();
    QListView::leaveEvent(e);
}
