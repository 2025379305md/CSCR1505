#include<stdio.h>
int sum(int a)
{
    int res;
    while(a!=0)
    {
        res=res+a%10;
        a=a/10;
    }
    return res;
}

int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("sum of digits is %d",sum(n));
    return 0;
}
