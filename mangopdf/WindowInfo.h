#ifndef WINDOWINFO_H
#define WINDOWINFO_H

#include "mangopdf.h"

class mangopdf;
class MMenu;

class WindowInfo
{
public:
    WindowInfo();
    ~WindowInfo();

public:

    mangopdf *mango;

    MMenu *hwndMenu;

    QString filePath;
};

#endif