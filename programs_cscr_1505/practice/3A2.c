#include<stdio.h>
float sum(float a,float b,float c,float d,float e)
{
    float s;
    s=a+b+c+d+e;
    return s;
}
float percentage(float a)
{
    float p;
    p=a/5;
    return p;
}
int main()
{
    float m1,m2,m3,m4,m5,perc,agg;
    printf("enter marks of 5 subjects:");
    scanf("%f%f%f%f%f",&m1,&m2,&m3,&m4,&m5);
    printf("aggregate marks is %f\n",sum(m1,m2,m3,m4,m5));
    printf("percentage is %f",percentage(sum(m1,m2,m3,m4,m5)));
    return 0;
}