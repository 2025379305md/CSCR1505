#include<stdio.h>

typedef struct{
    float real;
    float imag;
}complex;

complex sum(complex a,complex b)
{
    complex r;
    r.real=a.real+b.real;
    r.imag=a.imag+b.imag;
    return r;
}

int main()
{
    complex a,b;
    printf("enter the real and imaginary part of first complex number:");
    scanf("%f%f",&a.real,&a.imag);
    printf("enter the real and imaginary part of second complex number:");
    scanf("%f%f",&b.real,&b.imag);
    complex x=sum(a,b);
    printf("sum of the two complex numbers is %f + %fi",x.real,x.imag);
    return 0;
}

