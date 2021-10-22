#include<stdio.h>
#include "stats.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
Stats compute_statistics(const float* numberset, int setlength) {
	Stats s;
	s.average = 0;
    s.min = numberset[0];
    s.max = numberset[0];
	float total = 0.0;
	//Testcase1:	
	for (int i=0;i<setlength;i++)
	{
	total+=	numberset[i] ;
	if (s.min > numberset[i])
	{
		s.min = numberset[i];
	}
	if (s.max < numberset[i])
	{
		s.max = numberset[i];
	}
	}
	//Testcase2:
	if ((setlength == 0 )|| (total == 0.0))
	{		
    s.average = NAN;
	s.min = NAN;
    s.max = NAN;		
	}
else
{
	s.average = total / setlength;
}
return s;
}

Stats compute_statistics(const int numberset, int setlength) {
if ((setlength == 0 ) || (numberset == 0))
	{
	Stats s;
    s.average = NAN;
    s.min = NAN;
    s.max = NAN;
	return s;		
	}
	
}

void emailAlerter()
{	
emailAlertCallCount = 1;
}
void ledAlerter()
{
 ledAlertCallCount = 1;
}

void check_and_alert(float maxThreshold,alerter_funcptr alerters[], Stats computedStats)
{
	if(computedStats.max > maxThreshold)
	{
		alerters[0]();
		alerters[1]();
	}
	
}


