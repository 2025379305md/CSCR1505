#include<stdio.h>

void prnt1(int a)
{
    for (int i=1;i<=a;i++)
    {
        for (int j=1;j<=i;j++)
        {
            printf("*");
        }
        printf("\n");
    }
}

void prnt2(int a)
{
  for (int i=1;i<=a;i++)
  {
    for (int j=1;j<=a-i;j++)
    {
        printf(" ");
    }
    for (int j=1;j<=i;j++)
    {
        printf("*");
    }
    printf("\n");
  }
}

void prnt3(int a)
{
    for (int i=1;i<=a;i++)
    {
        for (int j=a;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

void prnt4(int a)
{
    for (int i=1;i<=a;i++)
    {
        for(int k=i-1;k>=1;k--)
        {
            printf(" ");
        }
        for (int j=a;j>=i;j--)
        {
            printf("*");
        }
        printf("\n");
    }
}

void prnt5(int a)
{
  for (int i=1;i<=a;i++)
  {
    for (int j=1;j<=a-i;j++)
    {
        printf(" ");
    }
    for (int j=1;j<=i;j++)
    {
        printf("*");
    }
    for(int k=1;k<i;k++)
    {
        printf("*");
    }
    printf("\n");
  }
}

void prnt6(int a)
{
    for (int i=1;i<=a;i++)
  {
    for (int j=1;j<=a-i;j++)
    {
        printf(" ");
    }
    for (int j=1;j<=i;j++)
    {
        printf("*");
    }
    for(int k=1;k<i;k++)
    {
        printf("*");
    }
    printf("\n");
  }
    for (int i=1;i<=a;i++)
    {
        for(int k=i-1;k>=1;k--)
        {
            printf(" ");
        }
        for (int j=a;j>=i;j--)
        {
            printf("*");
        }
        for(int k=a-1;k>=i;k--)
        {
            printf("*");
        }
        printf("\n");
    }
}

int main()
{
    int a;
    printf("enter the number of rows:");
    scanf("%d",&a);
    prnt1(a);
    printf("\n");
    prnt2(a);
    printf("\n");
    prnt3(a);
    printf("\n");
    prnt4(a);
    printf("\n");
    prnt5(a);
    
    prnt6(a);
    return 0;
}