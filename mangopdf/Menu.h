#ifndef MENU_H
#define MENU_H

#include <QAction>
#include <QMenu>
#include <QMenuBar>
#include <QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QWidget>
#include <QMessageBox>
#include "mangopdf.h"

class WindowInfo;
class mangopdf;

class MMenu : public QObject
{
    Q_OBJECT

public:
    MMenu(WindowInfo * win);
    ~MMenu();

    //信号
signals:

    //槽
private slots:
    void OpenFileSlot();         //打开文件槽函数
    void CloseFileSlot();       //关闭文件槽函数
    void ExitApp();            //退出应用程序

public:
    WindowInfo *winInfo;

private:
    void CreateAction();
    void CreateMenu();

private:
    QAction *fileOpenAction;
    QAction *fileCloseAction;
    QAction *exitAction;

    QMenu *fileMenu;
    QMenu *editMenu;
    QMenu *viewMenu;
    QMenu *modeMenu;
    QMenu *hlpeMenu;
};

#endif