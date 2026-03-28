#include<stdio.h>

float cost(int tsp,int tp)
{
    float cp;
    cp=(tsp-tp)/15.000;
    return cp;
}

int main()
{
    int sp,p;
    printf("enter the total selling price: ");
    scanf("%d",&sp);
    printf("enter the total profit:");
    scanf("%d",&p);
    printf("the cost price of ojne item is %f",cost(sp,p));
    return 0;
}