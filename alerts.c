#include "alerts.h"

int emailAlertCallCount = 0;
int ledAlertCallCount = 0;
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats compute_statistics)
{
	if (compute_statistics.max > maxThreshold)
	{
		alerters[0]();
		alerters[1]();
	}
}

void emailAlerter()
{
	emailAlertCallCount = 1;
}

void ledAlertCallCount()
{
	ledAlertCallCount = 1;
}
		
