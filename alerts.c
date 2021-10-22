#include "alerts.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;

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
