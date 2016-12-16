#include "mc_gui.h"

mc_gui::mc_gui(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	setConnections();
	pic = new micro;
	//QString str = QFileDialog::getOpenFileName(this, "Open Dialog", "", "*.txt");
}

mc_gui::~mc_gui()
{
	delete pic;
}

void mc_gui::setConnections()
{
	connect(ui.pushButton, SIGNAL(clicked()), this, SLOT(knowfilename()));
	connect(ui.pushButton_3, SIGNAL(clicked()), this, SLOT(runAll()));
	connect(ui.pushButton_4, SIGNAL(clicked()), this, SLOT(runOne()));
}

void mc_gui::runAll()
{
	pic->pc = 0;
	while (pic->pc < pic->rom.size())
	{
		pic->next();
		ui.listWidget->item(pic->pc)->setSelected(true);
		pic->pc++;
	}
}

void mc_gui::runOne()
{
	if (pic->pc == pic->rom.size())
		pic->pc = 0;
	pic->next();
	ui.listWidget->item(pic->pc)->setSelected(true);
	pic->pc++;
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
