#include<stdio.h>

int sum(int d)
{
    int y,x=0;
    while(d>0)
    {
        y=d%10;
        x=x+y;
        d=d/10;
    }
}