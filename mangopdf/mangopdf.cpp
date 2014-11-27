#include "mangopdf.h"

mangopdf::mangopdf(QWidget *parent)
    : QMainWindow(parent)
{
    ui.setupUi(this);
    win = new WindowInfo();
    win->mango = this;
    //界面初始化
    WindowInit(win);
}

mangopdf::~mangopdf()
{
}

void mangopdf::WindowInit(WindowInfo *win)
{
    //创建菜单栏
    win->hwndMenu = new MMenu(win);
    this->resize(900, 600);
}
