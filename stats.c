
#include<stdio.h>
#include "stats.h"

//Testcase::("reports average, minimum and maximum")
Stats compute_statistics(const float* numberset, int setlength) 
{
    Stats computedStats;
    computedStats.average = 0;
    computedStats.min = numberset[0];
    computedStats.max = numberset[0];
	float total_val = 0.0;
	
	for (int i=0;i<setlength;i++)
	{
		total_val += numberset[i] ;
		if (computedStats.min > numberset[i])
		{
			computedStats.min = numberset[i];
		}
		if (computedStats.max < numberset[i])
		{
			computedStats.max = numberset[i];
		}
	}	
	//Testcase:"average is NaN for empty array"
	if ((setlength == 0 ))
	{
		
       computedStats.average = NAN;
       computedStats.min = NAN;
       computedStats.max = NAN;
		
	}
	else
	{
	 computedStats.average = total_val / setlength;
	}
	
return computedStats;
}

//Testcase:"average is NaN for empty array"
Stats compute_statistics(const int numberset, int setlength)
 {
	Stats computedStats;	 
	if ((setlength == 0 ) || (numberset == 0))
	{
		computedStats.average = NAN;
		computedStats.min = NAN;
		computedStats.max = NAN;
	}
	return computedStats;	
	
}

