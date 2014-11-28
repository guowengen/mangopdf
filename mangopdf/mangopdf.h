#ifndef MANGOPDF_H
#define MANGOPDF_H

#include <QtWidgets/QMainWindow>
#include "ui_mangopdf.h"

#include "WindowInfo.h"
#include "Menu.h"
#include "MupdfExports.h"

class WindowInfo;

class mangopdf : public QMainWindow
{
    Q_OBJECT

public:
    mangopdf(QWidget *parent = 0);
    ~mangopdf();
private:
    void WindowInit(WindowInfo *win);

private:
    Ui::mangopdfClass ui;

private:
    WindowInfo *win;
};

#endif // MANGOPDF_H
