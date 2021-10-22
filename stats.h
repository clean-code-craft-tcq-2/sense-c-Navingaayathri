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

extern Stats compute_statistics(const float* numberset, int setlength);
extern Stats compute_statistics(const int numberset, int setlength) ;

#endif

