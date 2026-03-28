#include<stdio.h>
#include <stdlib.h>

int total(int *quantity,int *price,int n)
{
    int sum=0,q=0;
    for (int i=0;i<n;i++)
    {
        q=quantity[i]+q;
        sum=quantity[i]*price[i]*0.9+sum;
    }
    if(q>100||sum>5000)
    sum=sum*0.9;
    return sum;
}

int main()
{
    int n;
    printf("enter the number of items:");
    scanf("%d",&n);
    int *quantity=calloc(n,sizeof(int));
    int *price=calloc(n,sizeof(int));
    for (int i=0;i<n;i++)
    {
        printf("enter the quantity for item %d:",i+1);
        scanf("%d",&quantity[i]);
        printf("enter the price for item %d:",i+1);
        scanf("%d",&price[i]);
    }
    printf("the total cost is %d",total(quantity,price,n));
    free(quantity);
    free(price);
    return 0;
}