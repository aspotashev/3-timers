#include <QtGui>

class AnalogClock : public QWidget
{
	Q_OBJECT

	int m_timezone;
	QTimer *timer;

public:
	AnalogClock(int timezone);
	~AnalogClock();

	void paintEvent(QPaintEvent *event);
};

