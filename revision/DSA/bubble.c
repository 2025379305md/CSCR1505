#include<stdio.h>
#include<stdlib.h>

void bubble(int *a, int n)
{
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(a[j]>a[j+1])
            {
                int temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}


int main()
{
    int n;
    printf("enter the size of your array: ");
    if (scanf("%d", &n) != 1 || n <= 0)
    {
        fprintf(stderr, "Invalid array size\n");
        return 1;
    }
    int *a = (int *)malloc(n * sizeof(int));
    if (a == NULL)
    {
        fprintf(stderr, "Memory allocation failed\n");
        return 1;
    }
    for(int i=0;i<n;i++)
    {
        printf("enter element %d: ", i + 1);
        scanf("%d", &a[i]);
    }
    bubble(a, n);
    printf("sorted array: ");
    for(int i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }
    printf("\n");
    free(a);
    return 0;

}