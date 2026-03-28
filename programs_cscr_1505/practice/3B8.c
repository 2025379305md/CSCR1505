#include<stdio.h>

int leap(int y)
{
    if((y%4==0&&y%100!=0)||y%400==0)
        return 1;
    else
        return 0;
}

int main()
{
    int y;
    printf("enter a year:");
    scanf("%d",&y);
    if(leap(y))
        printf("%d is a leap year",y);
    else
        printf("%d is not a leap year",y);
    return 0;
}