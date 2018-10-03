#include <stdio.h>  // printf
#include "d30act.h"

int main()
{
    int y1, m1, d1, y2, m2, d2, y3, m3, d3, freq;
    y1 = 2018; m1 = 12; d1 = 15;
    y2 = 2019; m2 = 3; d2 = 1;
    y3 = 2019; m3 = 3; d3 = 15;
    freq = 4;

    double yf = d30act(y1,m1,d1, y2,m2,d2, y3,m3,d3, freq);
    printf("%.8f\n", yf);

	return 0;
}
