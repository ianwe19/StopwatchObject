#ifndef __STOPWATCH__
#define __STOPWATCH__


class StopWatch {
private:

public:
	// CONSTRUCTOR
	StopWatch();


	bool Start();

	bool Stop();

	bool IsTicking();

	void DisplayTimerInfo();

};
#endif