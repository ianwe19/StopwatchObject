#include "StopWatch.h"
#include <iostream>
#include <time.h>


// CONSTRUCTOR
StopWatch::StopWatch() {
	this->beginTime = 0;
	this->endTime = 0;
	this->elapsedTime = 0;
	this->secondsElapsed = 0;
	this->milsElapsed = 0;
}


bool StopWatch::Start() {
	if (this->IsTicking()) {
		return false;
	}
	else {
		this->beginTime = clock();
		return true;
	}
}


bool StopWatch::Stop() {
	if (this->IsTicking()) {
		this->endTime = clock();
		return true;
	}
	else {
		return false;
	}
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
