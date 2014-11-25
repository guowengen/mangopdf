#ifndef MANGOPDF_H
#define MANGOPDF_H

#include <QtWidgets/QMainWindow>
#include "ui_mangopdf.h"

class mangopdf : public QMainWindow
{
	Q_OBJECT

public:
	mangopdf(QWidget *parent = 0);
	~mangopdf();

private:
	Ui::mangopdfClass ui;
};

#endif // MANGOPDF_H
