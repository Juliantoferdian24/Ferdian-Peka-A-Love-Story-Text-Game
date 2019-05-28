#include "arrowhere.h"
#include<stdio.h>

void arrowhere(int realposition,int arrowposition)
{
    if (realposition==arrowposition)
    {
        color(4);
        printf("\t\t\t\t\t\t\t\t---->");
        color(0);
    }
    else
    {
        color(0);
        printf("\t\t\t\t\t\t\t\t     ");
    }
}
