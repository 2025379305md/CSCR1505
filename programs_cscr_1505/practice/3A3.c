#include<stdio.h>

void swap(int *a,int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}

int main()
{
    int x[2];
    printf("enter two numbers:");
    scanf("%d%d",&x[0],&x[1]);
    swap(&x[0],&x[1]);
    printf("after swapping 1st number is %d\n",x[0]);
    printf("after swapping 2nd number is %d",x[1]);
    return 0;
}