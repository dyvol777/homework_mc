#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_mc_gui.h"
#include <QFileDialog>
#include "mc\micro.h"

class mc_gui : public QMainWindow
{
    Q_OBJECT

public:
    mc_gui(QWidget *parent = Q_NULLPTR);
	~mc_gui();
private:
	Ui::mc_guiClass ui;
	micro* pic;

	void setConnections();

public slots:
	void knowfilename();
	void runAll();
	void runOne();
	
};
