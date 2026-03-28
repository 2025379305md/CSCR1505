#include <stdio.h>
#include <math.h>

int counter(int x)
{
    int n;
    while(x>0)
    {
        x=x/10;
        n++;
    }
    return n;
}

void arm(int x)
{
    int org=x,y=0,n=counter(x);
    while(x>0)
    {
        y=y+pow(x%10,n);
        x=x/10;
    }
    if(y==org)
    printf("armstrong number");
    else
    printf("not an armstrong number");
}

int main (){
    int a;
    printf("enter a number:");
    scanf("%d",&a);
    arm(a);
    return 0;
}