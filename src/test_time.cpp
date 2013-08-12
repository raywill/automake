#include "config.h"
#include <tbsys.h>
#include <stdio.h>
#include <stdint.h>

int main()
{
	int64_t now;
	now = tbsys::CTimeUtil::getTime();
	printf("%s\n", PACKAGE_STRING);
	printf("Bug report to %s\n", PACKAGE_BUGREPORT);
	printf("now=%lld\n", now);
	return 0;
}
