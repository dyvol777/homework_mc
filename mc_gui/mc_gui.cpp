#include "mc_gui.h"

mc_gui::mc_gui(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setConnections();
	pic = new micro();
	rs = new ramShow();//не закрывается при закрытии основного окна
	//pic->clear();
	//QString str = QFileDialog::getOpenFileName(this, "Open Dialog", "", "*.txt");
}

mc_gui::~mc_gui()
{
	rs->close();
	delete pic;
	delete rs;
}

void mc_gui::setConnections()
{
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(knowfilename()));
	connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(runAll()));
	connect(ui.pushButton_4, SIGNAL(clicked()), this, SLOT(runOne()));
	connect(ui.pushButton_2, SIGNAL(clicked()), this, SLOT(showra()));

}

void mc_gui::showra()
{
	rs->show();
	//pic->clear();
	rs->rawchange(pic->reg, pic->ram); 
}

void mc_gui::rawchange()
{
	rs->rawchange(pic->reg, pic->ram);
}

void mc_gui::getP()
{
	pic->pins[0].leg = ui.checkBox_1->isChecked();
	pic->pins[1].leg = ui.checkBox_2->isChecked();
	pic->pins[2].leg = ui.checkBox_3->isChecked();
	pic->pins[3].leg = ui.checkBox_4->isChecked();
	pic->pins[4].leg = ui.checkBox_5->isChecked();
	pic->pins[5].leg = ui.checkBox_6->isChecked();
}

void mc_gui::setP()
{
	ui.checkBox_7->setChecked(pic->pins[0].leg);
	ui.checkBox_8->setChecked(pic->pins[1].leg);
	ui.checkBox_9->setChecked(pic->pins[2].leg);
	ui.checkBox_10->setChecked(pic->pins[3].leg);
	ui.checkBox_11->setChecked(pic->pins[4].leg);
	ui.checkBox_12->setChecked(pic->pins[5].leg);
}

void mc_gui::runAll()
{
	getP();
	pic->pc = 0;
	while (pic->pc < pic->rom.size())
	{
		pic->next();
		rawchange();
		ui.listWidget->item(pic->pc)->setSelected(true);
		pic->pc++;
	}
	setP();
}

void mc_gui::runOne()//программа вылетает
{
	pic->next();
	rawchange();
	ui.listWidget->item(pic->pc)->setSelected(true);
	pic->pc++;
	setP();
	if (pic->pc == pic->rom.size())
	{
		pic->pc = 0;
		getP();
	}
}

void mc_gui::knowfilename()
{
	QString str = QFileDialog::getOpenFileName(this, "Open Dialog", QCoreApplication::applicationDirPath(), "*.txt");
	string st = str.toStdString();
	if (st.empty())
		return;
	pic->setRom(st);
	for (auto i : pic->rom)
	{
		ui.listWidget->addItem(QString::fromStdString(i));
	}
	ui.listWidget->item(pic->pc)->setSelected(true);
	//return st;
}
