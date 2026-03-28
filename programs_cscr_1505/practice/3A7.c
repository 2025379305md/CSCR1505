#include<stdio.h>

typedef struct
{
    int a10;
    int a50;
    int a100;
}notes;

notes pop(int a)
{
    notes r;
    r.a100=a/100;
    a=a%100;
    r.a50=a/50;
    a=a%50;
    r.a10=a/10;
    return r;
}

int main()
{
    int a;
    printf("enter the amount:");
    scanf("%d",&a);
    notes x=pop(a);
    printf("number of 100 notes is %d\n",x.a100);
    printf("number of 50 notes is %d\n",x.a50);
    printf("number of 10 notes is %d\n",x.a10);
    return 0;
}