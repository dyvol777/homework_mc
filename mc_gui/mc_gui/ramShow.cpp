#include "ramShow.h"

ramShow::ramShow(QWidget *parent)
	: QWidget(parent)
{
	ui.setupUi(this);
}

ramShow::~ramShow()
{
}

void ramShow::rawchange(uint8_t* a,uint8_t* b)
{
	ui.lcdNumber->display(a[0]);
	ui.lcdNumber_2->display(a[1]);
	ui.lcdNumber_3->display(a[2]);
	ui.lcdNumber_4->display(a[3]);

	ui.lcdNumber_5->display(b[0]);
	ui.lcdNumber_6->display(b[1]);
	ui.lcdNumber_7->display(b[2]);
	ui.lcdNumber_8->display(b[3]);
	ui.lcdNumber_9->display(b[4]);
	ui.lcdNumber_10->display(b[5]);
	ui.lcdNumber_11->display(b[6]);
	ui.lcdNumber_12->display(b[7]);
	ui.lcdNumber_13->display(b[8]);
	ui.lcdNumber_14->display(b[9]);
	ui.lcdNumber_15->display(b[10]);
	ui.lcdNumber_16->display(b[11]);
	ui.lcdNumber_17->display(b[12]);
	ui.lcdNumber_18->display(b[13]);
	ui.lcdNumber_19->display(b[14]);
	ui.lcdNumber_20->display(b[15]);
}
