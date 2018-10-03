#ifndef D30ACT_H
#define D30ACT_H

#include "isaleapyear/isaleapyear.h"
#include "julianday/julianday.h"
#include <stdlib.h> //exit
#include <stdio.h>

double d30act(int y1, int m1, int d1, 
              int y2, int m2, int d2,
              int y3, int m3, int d3,
              int freq);

#endif /* D30ACT_H */
