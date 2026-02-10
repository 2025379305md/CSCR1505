#include<stdio.h>
#include<conio.h>

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

int perm(int n , int r)
{
    int p;
    p=fact(n)/fact(n-r);
    return p;
}

int comb(int n , int r)
{
    int c;
    c=fact(n)/(fact(r)*fact(n-r));
    return c;
}

int main()
{
    int n,r;
    printf ("Enter n and r: ");
    scanf ("%d %d", &n, &r);
    printf("Permutation: %d\n", perm(n,r));
    printf("Combination: %d\n", comb(n,r));
    return 0;
}