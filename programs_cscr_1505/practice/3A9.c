#include<stdio.h>

typedef struct
{
    int h;
    int m;
    int s;
}time;

time sec(int s)
{
    time r;
    r.h=s/3600;
    s=s%3600;
    r.m=s/60;
    s=s%60;
    r.s=s;
    return r;
}

int main()
{
    int s;
    printf("enter the number of seconds:");
    scanf("%d",&s);
    time x=sec(s);
    printf("time is %d hours %d minutes %d seconds",x.h,x.m,x.s);
    return 0;
}