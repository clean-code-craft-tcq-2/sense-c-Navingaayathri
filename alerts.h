#include <math.h>
#include "stats.h"
typedef void (*alerter_funcptr)();
void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats);
void emailAlerter();
void ledAlerter();
