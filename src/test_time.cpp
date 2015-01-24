#include "config.h"
#include <timer.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
	int64_t now;
	Timer timer = Timer();
	now = timer.now();
	printf("%s\n", PACKAGE_STRING);
	printf("Bug report to %s\n", PACKAGE_BUGREPORT);
	printf("now=%lld\n", now);
	return 0;
}
