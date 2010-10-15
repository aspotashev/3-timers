#include "analogclock.h"

AnalogClock::AnalogClock(int timezone)
{
	m_timezone = timezone;

	timer = new QTimer;
	connect(timer, SIGNAL(timeout()), this, SLOT(update()));
	timer->start(1000);
}

AnalogClock::~AnalogClock()
{
	timer->stop();
}

void AnalogClock::paintEvent(QPaintEvent *)
{
	QPainter painter(this);
	painter.drawText(rect(), Qt::AlignCenter,
		QTime::currentTime().addSecs(3600 * m_timezone).toString("hh:mm:ss"));
}

