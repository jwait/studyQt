#include "GPS.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	GPS w;
	w.show();
	return a.exec();
}
