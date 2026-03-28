#include<stdio.h>
int rev(int a)
{
    int r=0;
    while(a!=0)
    {
        r=r*10+a%10;
        a=a/10;
    }
    return r;
}
int main()
{
    int n;
    printf("enter a number:");
    scanf("%d",&n);
    printf("reverse of the number is %d",rev(n));
    return 0;
}