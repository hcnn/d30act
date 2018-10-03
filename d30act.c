#include "d30act.h"

double d30act(int y1, int m1, int d1, 
              int y2, int m2, int d2,
              int y3, int m3, int d3,
              int freq) 
{
    if( freq < 1 ){
        fprintf(stderr, "Payment frequency is smaller than 1."); 
        exit(-1);
    }

    int diff_days = 0;
    diff_days += (360 * (y2 - y1));
    diff_days += ( 30 * (m2 - m1));

    if((d2 == 31) && (d1 >= 30)){
        diff_days += 30;
    }else{
        diff_days += d2;
    }
    
    diff_days -= (d1 > 30 ? 30 : d1);

    if( diff_days < 0){
        fprintf(stderr, "Newer date y2-m2-d2 is older than previous date y1-m1-d1."); 
        exit(-1);
    }else if(diff_days == 0){
        return 0e0;
    }

    int yearmax = (isaleapyear(y2) ? 366 : 365);

    int diff_13 = date_to_jd(y3, m3, d3);
    diff_13 -= date_to_jd(y1, m1, d1);
    
    if(diff_13 < 0){
        fprintf(stderr, "Newer date y3-m3-d3 is older than previous date y2-m2-d2."); 
        exit(-1);
    }

    if(diff_13 > yearmax){
        return (double)(diff_days) / (double)(yearmax);
    }else{
        return (double)(diff_days) / (double)(freq * diff_13);
    }    
}
