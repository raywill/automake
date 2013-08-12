#include "timer.h"

Timer *create_timer()
{
	static Timer timer;
	return &timer;
}

Timer::Timer()
{
}

Timer::~Timer()
{
}

int64_t Timer::now()
{
	return 1984LL;
}

