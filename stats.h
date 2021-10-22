#ifndef STATS_H 
#define STATS_H 

#include <math.h>
#ifdef NAN
/* NAN is supported */
#endif

struct Stats 
{
    float average;
    float min ;
    float max;
};

extern  Stats compute_statistics(const float* numberset, int setlength);
Stats compute_statistics(const int numberset, int setlength) ;
typedef void (*alerter_funcptr)();
extern void check_and_alert(float maxThreshold, alerter_funcptr alerters[], Stats computedStats);
extern void  emailAlerter();
extern void  ledAlerter();
extern int emailAlertCallCount;
extern int ledAlertCallCount;
#endif


