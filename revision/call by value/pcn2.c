#include<stdio.h>
int fact(int n)
{
    if(n==0||n==1)
    return 1;
    else
    {
        int f=1;
        while(n>1)
        {
            f=f*n;
            n--;
        }
        return f;
    }
}
int perm(int n,int r)
    {
        int p;
        p=fact(n)/fact(n-r);
        return p;
    }
int comb(int n,int r)
    {
        int c;
        c=fact(n)/(fact(r)*fact(n-r));
        return c;
    }
int main()
{
    int n,r,permuntation,combination;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("enter the value of r: ");
    scanf("%d", &r);
    permuntation= perm(n,r);
    combination= comb(n,r);
    printf("permutation is: %d\n",permuntation);
    printf("combination is: %d\n",combination);
    return 0;
}