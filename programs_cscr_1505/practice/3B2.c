#include<stdio.h>

void oe(int a)
{
    if(a%2==0)
        printf("even");
    else
        printf("odd");
}

int main()
{
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    oe(a);
    return 0;
}