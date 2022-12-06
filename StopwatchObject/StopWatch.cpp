#include "StopWatch.h"
#include <time.h>


// CONSTRUCTOR
StopWatch::StopWatch() {
	clock_t beginTime = 0;		// really a 'long int'
	clock_t endTime = 0;
	clock_t elapsedTime = 0;
	long int secondsElapsed = 0;
	long int milsElapsed = 0;
}


bool StopWatch::Start() {
	beginTime = clock();
}


bool StopWatch::Stop() {
	endTime = clock();
}


bool StopWatch::IsTicking() {

}


void StopWatch::DisplayTimerInfo() {

}
