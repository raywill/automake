#ifndef __TEST_TIMER_LIB__
#define __TEST_TIMER_LIB__
#include <stdint.h>
class Timer
{
public:
	Timer();
	virtual ~Timer();
	int64_t now();

};
extern Timer *create_timer();

#endif
