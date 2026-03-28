#include<stdio.h>
float salary(float a)
{
    float d,h,g;
    d=0.4*a;
    h=0.2*a;
    g=a+d+h;
    return g;
}
int main()
{
    float s,d,h,g;
    printf("enter your basic salary:");
    scanf("%f",&s);
    printf("your gross salary is %f",salary(s));
    return 0;
}