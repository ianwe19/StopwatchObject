#ifndef __STOPWATCH__
#define __STOPWATCH__

#include <time.h>

class StopWatch {
private:
	clock_t beginTime;
	clock_t endTime;
	clock_t elapsedTime;
	long int secondsElapsed;
	long int milsElapsed;

public:
	// CONSTRUCTOR
	StopWatch();


	bool Start();

	bool Stop();

	bool IsTicking();

	void DisplayTimerInfo();

};
#endif