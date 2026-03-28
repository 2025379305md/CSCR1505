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
int main()
{
    int n,r,perm,comb;
    printf("enter the value of n: ");
    scanf("%d",&n);
    printf("enter the value of r: ");
    scanf("%d", &r);
    perm=fact(n)/fact(n-r);
    comb=fact(n)/(fact(r)*fact(n-r));
    printf("permutation is: %d\n",perm);
    printf("combination is: %d\n",comb);
    return 0;
}