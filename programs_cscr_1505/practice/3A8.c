#include<stdio.h>

float cost(float tsp,float tp)
{
    return (tsp-tp)/15.000;
}

int main()
{
    float tsp,tp;
    printf("enter the total selling price:");
    scanf("%f",&tsp);
    printf("enter the total profit:");
    scanf("%f",&tp);
    printf("cost price is %f",cost(tsp,tp));
    return 0;
}