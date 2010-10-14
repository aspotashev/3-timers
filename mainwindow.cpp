#include "mainwindow.h"
#include "analogclock.h"

MainWindow::MainWindow()
{
	central = new QWidget;

	QHBoxLayout *layout = new QHBoxLayout;
	for (int i = 0; i < 3; i ++)
		layout->addWidget(new AnalogClock(i));

	central->setLayout(layout);
	setCentralWidget(central);
}

MainWindow::~MainWindow()
{
}

