#include<stdio.h>

int ot(int a)
{
    return (a-40)*12.00;
}

int main()
{
    int a;
    printf("Enter the number of hours worked: ");
    scanf("%d",&a);
    if(a>40)
    {
        printf("Overtime pay is: %.2f",ot(a));
    }
    else
    {
        printf("No overtime pay.");
    }
    return 0;
}