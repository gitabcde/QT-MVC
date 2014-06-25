#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "ccimagedelegate.h"
#include <QFileSystemModel>
#include <QStringList>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow),
    m_deleagte(new CCImageDelegate),
    m_fs(new QFileSystemModel),
    m_qs(new QStringListModel)
{
    ui->setupUi(this);
    m_fs->setRootPath("/home");
    QStringList mystring;
    mystring.push_back("first");
    mystring.push_back("second");
    mystring.push_back("third");
    m_qs->setStringList(mystring);
    ui->listView->setItemDelegate(m_deleagte);
//    ui->listView->setLayoutMode(QListView::SinglePass);
    ui->listView->setViewMode(QListView::IconMode);
    ui->listView->setModel(m_qs);
    ui->tableView->setModel(m_qs);
    ui->tableView->setItemDelegate(m_deleagte);
    ui->columnView->setModel(m_qs);
    ui->columnView->setItemDelegate(m_deleagte);


}

MainWindow::~MainWindow()
{
    delete ui;
}
