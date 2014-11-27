/********************************************************************************
** Form generated from reading UI file 'mangopdf.ui'
**
** Created by: Qt User Interface Compiler version 5.3.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MANGOPDF_H
#define UI_MANGOPDF_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_mangopdfClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *mangopdfClass)
    {
        if (mangopdfClass->objectName().isEmpty())
            mangopdfClass->setObjectName(QStringLiteral("mangopdfClass"));
        mangopdfClass->resize(600, 400);
        QIcon icon;
        icon.addFile(QStringLiteral(":/bmp/Resources/app.ico"), QSize(), QIcon::Normal, QIcon::Off);
        mangopdfClass->setWindowIcon(icon);
        centralWidget = new QWidget(mangopdfClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        mangopdfClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(mangopdfClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 600, 23));
        mangopdfClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(mangopdfClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        mangopdfClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(mangopdfClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        mangopdfClass->setStatusBar(statusBar);

        retranslateUi(mangopdfClass);

        QMetaObject::connectSlotsByName(mangopdfClass);
    } // setupUi

    void retranslateUi(QMainWindow *mangopdfClass)
    {
        mangopdfClass->setWindowTitle(QApplication::translate("mangopdfClass", "mangopdf", 0));
    } // retranslateUi

};

namespace Ui {
    class mangopdfClass: public Ui_mangopdfClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MANGOPDF_H
