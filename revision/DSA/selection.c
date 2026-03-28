#include<stdio.h>
#include<stdlib.h>

void selection (int *a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(int j=i+1;j<n;j++)
        {
            if(a[j]<a[min])
            {
                min=j;
            }
        }
        int temp=a[i];
        a[i]=a[min];
        a[min]=temp;
    }
}

int main()
{
    FILE *fp=fopen("text.txt","r");
    int n;
    fscanf(fp,"%d",&n);
    int *a=(int*)malloc(n*sizeof(int));
    for(int i=0;i<n;i++)
    {
        fscanf(fp,"%d",&a[i]);
    }
    selection(a,n);
    for(int i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    fclose(fp);
    free(a);
    return 0;

}