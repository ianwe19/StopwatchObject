#include "StopWatch.h"
#include <iostream>
#include <time.h>


// CONSTRUCTOR
StopWatch::StopWatch() {
	clock_t beginTime = 0;
	clock_t endTime = 0;
	clock_t elapsedTime = 0;
	long int secondsElapsed = 0;
	long int milsElapsed = 0;
}


bool StopWatch::Start() {
	this->beginTime = clock();
	return true;
}


bool StopWatch::Stop() {
	this->endTime = clock();
	return true;
}


bool StopWatch::IsTicking() {
	if (this->endTime = NULL) {
		return false;
	}
	else {
		return true;
	}
}


void StopWatch::DisplayTimerInfo() {
	this->secondsElapsed = elapsedTime / CLOCKS_PER_SEC;
	this->milsElapsed = elapsedTime / (CLOCKS_PER_SEC / 1000);
	std::cout << this->secondsElapsed << "." << this->milsElapsed << " seconds have passed.";
}
