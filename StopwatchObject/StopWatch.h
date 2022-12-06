#ifndef __STOPWATCH__
#define __STOPWATCH__


class StopWatch {
private:
	clock_t beginTime = 0;		// really a 'long int'
	clock_t endTime = 0;
	clock_t elapsedTime = 0;
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