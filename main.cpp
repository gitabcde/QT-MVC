#include <QApplication>
#include "ccimageviewlist.h"
#include <QStringListModel>
#include <QStringList>
int main(int argc, char *argv[])
{
    QStringList mysl;
    mysl.push_back("first");
    mysl.push_back("second");
    mysl.push_back("third");
    QStringListModel myslm;
    myslm.setStringList(mysl);
    QApplication a(argc, argv);
    QWidget* w=new QWidget;
    CCImageViewList* ivl=new CCImageViewList(w);
    ivl->setViewMode(QListView::IconMode);
    ivl->setModel(&myslm);
    w->show();

    return a.exec();
}
