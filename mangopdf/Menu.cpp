#include "Menu.h"
#include <QFileDialog>


MMenu::MMenu(WindowInfo *win) : winInfo(win)
{
    CreateAction();
    CreateMenu();
}

MMenu::~MMenu()
{
}

void MMenu::CreateAction()
{
    //创建打开文件动作
    fileOpenAction = new QAction(QIcon::fromTheme("打开文件", QIcon(":/menu/Resources/Open.png")), QStringLiteral("&打开文件..."), winInfo->mango);
    fileOpenAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_O));  //设置打开文件动作的快捷键
    fileOpenAction->setStatusTip(QStringLiteral("打开一个文件"));   //设置打开文件动作的提示信息
    connect(fileOpenAction, SIGNAL(triggered()), this, SLOT(OpenFileSlot()));//关联打开文件动作的信号和槽
    //关闭文件
    fileCloseAction = new QAction(QIcon::fromTheme("关闭文件", QIcon(":/res/Close.png")), QStringLiteral("&关闭文件..."), winInfo->mango);
    fileCloseAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_W));
    fileCloseAction->setStatusTip(QStringLiteral("关闭一个文件"));
    connect(fileCloseAction, SIGNAL(triggered()), this, SLOT(CloseFileSlot()));
    //退出
    exitAction = new QAction(QIcon::fromTheme("退出", QIcon(":/menu/Resources/Exit.png")), QStringLiteral("&退出..."), winInfo->mango);
    exitAction->setShortcut(QKeySequence(Qt::CTRL + Qt::Key_Q));
    exitAction->setStatusTip(QStringLiteral("退出"));
    connect(exitAction, SIGNAL(triggered()), this, SLOT(CloseFileSlot()));
}

void MMenu::CreateMenu()
{
    fileMenu = winInfo->mango->menuBar()->addMenu(QStringLiteral("文件"));
    fileMenu->addAction(fileOpenAction);
    fileMenu->addAction(fileCloseAction);
    fileMenu->addSeparator();
    fileMenu->addAction(exitAction);
    editMenu = winInfo->mango->menuBar()->addMenu(QStringLiteral("编辑"));
}

void MMenu::OpenFileSlot()
{
    winInfo->filePath = QFileDialog::getOpenFileName(winInfo->mango, QStringLiteral("Open File..."),
                        QString(), QStringLiteral("pdf Files (*.pdf *.xps);;All Files (*)"));
}

void MMenu::CloseFileSlot()
{
}

void MMenu::ExitApp()
{
}

