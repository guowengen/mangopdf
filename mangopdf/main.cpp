#include "mangopdf.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    mangopdf *mango = new mangopdf();
    mango->show();
    return app.exec();
}
