#include<stdio.h>
#include<stdlib.h>

int insert (int *a,int data,int index,int n,int size)
{

    if(n==size)
    {
        return -1;
    }
    else
    {
        for(int i=n;i>index;i--)
        {
            a[i]=a[i-1];
        }
        a[(index-1)]=data;
    }
    return (n+1);
}


void main()
{
    FILE *fp=fopen("C:\\Users\\shaya\\OneDrive\\Desktop\\c\\revision\\DSA\\text.txt","r");

    int data,n,i=0,x,a;
    printf("enter the size of your array");
    scanf("%d",&n);
    int la[n];
    printf("how many element you want to be filled?");
    scanf("%d",&x);    
    while(fscanf(fp,"%d",&la[i])!=EOF && i<x)
    {
        printf("%d ",la[i]);
        i++;
    }
    printf("enter the data you want to insert");
    scanf("%d",&a);
    printf("enter the index you want to insert");
    scanf("%d",&i);
    n=insert(la,a,i,x,n);
    if(n==-1)
    {
        printf("array is full");
    }
    for(i=0;i<n;i++)
    {
        printf("%d ",la[i]);
    }

    fclose(fp);

}   