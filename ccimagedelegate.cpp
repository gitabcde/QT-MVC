#include "ccimagedelegate.h"
#include <QLabel>


CCImageDelegate::CCImageDelegate(QObject *parent) :
    QStyledItemDelegate(parent)
{
}

QWidget* CCImageDelegate::createEditor(QWidget *parent, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QLabel *editor=new QLabel(parent);
    editor->setMinimumSize(100,100);
    editor->setMaximumSize(100,100);
    editor->setText("hello");
    return editor;
}

void CCImageDelegate::updateEditorGeometry(QWidget *editor, const QStyleOptionViewItem &option, const QModelIndex &index) const
{
    QRect myrect=option.rect;
    myrect.setY(myrect.y()-myrect.height());
    editor->setGeometry(myrect);

}
