#pragma once

#include <QWidget>
#include "ui_ramShow.h"
#include "mc\micro.h"
class ramShow : public QWidget
{
	Q_OBJECT

public:
	ramShow(QWidget *parent = Q_NULLPTR);
	~ramShow();

private:
	Ui::ramShow ui;
public slots:
	void rawchange(uint8_t* a, uint8_t* b);
};
