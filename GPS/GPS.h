#pragma once

#include <QtWidgets/QMainWindow>
#include "ui_GPS.h"

class GPS : public QMainWindow
{
	Q_OBJECT

public:
	GPS(QWidget *parent = Q_NULLPTR);

private:
	Ui::GPSClass ui;

private slots:
	void on_actionGPSconnect_triggered();
};
