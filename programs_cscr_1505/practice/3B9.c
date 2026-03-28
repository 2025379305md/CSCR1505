#include<stdio.h>

int abs(int a)
{
    if(a<0)
        return -a;
    else
        return a;
}

int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    printf("the absolute value of the number is %d",abs(a));
    return 0;
}