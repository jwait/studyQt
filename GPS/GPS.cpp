#include "GPS.h"
#include "qlabel.h"

GPS::GPS(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	QLabel* label1 = new QLabel(tr("Label1"), this);
	QLabel* label2 = new QLabel(tr("Label2"), this);
	QLabel* label3 = new QLabel(tr("Label3"), this);
	QLabel* label4 = new QLabel(tr("Label4"), this);
	ui.statusBar->addWidget(label1, 1);
	ui.statusBar->addWidget(label2, 1);
	ui.statusBar->addWidget(label3, 1);
	ui.statusBar->addWidget(label4, 1);
	/*connect(ui.actionGPSconnect, SIGNAL(clicked), this, SLOT(on_actionGPSconnect_triggered()));*/
}

void GPS::on_actionGPSconnect_triggered() {
	QIcon icon(":/image/Resources/gps_disconnected.png");
	ui.actionGPSconnect->setIcon(icon);
}
