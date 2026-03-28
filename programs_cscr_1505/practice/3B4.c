#include<stdio.h>

int num(int a,int b)
{
    if(a==0||b==0)
    {
        printf("invalid input");
        return 0;
}
    else if(a>b)
    return a*b;
    else if (a<b)
    return a+b;
    else if(a==b)
    return a-b;
}

int main()
{
    int a,b,res;
    printf("enter two numbers:");
    scanf("%d%d",&a,&b);
    res=num(a,b);
    if(a!=0&&b!=0)
    printf("the result is %d",res);
    return 0;
}