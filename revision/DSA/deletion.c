#include<stdio.h>
#include<stdlib.h>

int delete (int *a,int index,int n)
{
    if(index>n)
    {
        return -1;
    }
    for(int i=index;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    return n-1;
}

int main()
{
    FILE *fp=fopen("C:\\Users\\shaya\\OneDrive\\Desktop\\c\\revision\\DSA\\text.txt","r");

    int a,b,n,x,i=0,y;
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
    printf("enter the index you want to delete");
    scanf("%d",&a);
    y=la[n];
    n=delete(la,a,n);
    for(i=0;i<x-1;i++)
    {
        printf("%d ",la[i]);
    }
    fclose(fp);
    return y;
}