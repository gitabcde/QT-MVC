#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "ccimagedelegate.h"
#include <QFileSystemModel>
#include <QStringListModel>
namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    CCImageDelegate* m_deleagte;
    QFileSystemModel* m_fs;
    QStringListModel* m_qs;
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
