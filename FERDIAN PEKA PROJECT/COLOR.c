#include "COLOR.h"
#include<stdio.h>

void color (int index)
{
    if(index==0)
    {
        printf("\033[0m");
    }
    if(index==1)//black
    {
        printf("\033[1;30m");
    }if(index==2)//red
    {
        printf("\033[1;31");
    }if(index==3)//green
    {
        printf("\033[0;32");
    }if(index==4)//yellow
    {
        printf("\033[1;33m");
    }if(index==5)//blue
    {
        printf("\033[1;34");
    }if(index==6)//purple
    {
        printf("\033[1;35");
    }if(index==7)//cyan
    {
        printf("\033[1;36");
    }if(index==8)//white
    {
        printf("\033[1;37");
    }

}
