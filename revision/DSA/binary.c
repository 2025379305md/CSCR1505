#include<stdio.h>
#include<stdlib.h>

void binary(int *a, int n,int data)
{
    int l=0,u=n-1,mid;
    while(l<=u)
    {
        mid=(l+u)/2;
        if(data==a[mid])
        {
            printf("data found at index %d\n",mid+1);
            return;
        }
        else if(data<a[mid])
        u=mid-1;
        else
        l=mid+1;
    }
    printf("data not found\n");

}

int main()
{
    FILE *fp = fopen("C:\\Users\\shaya\\OneDrive\\Desktop\\c\\revision\\DSA\\text.txt", "r");
    if (fp == NULL) {
        perror("Unable to open text.txt");
        return 1;
    }

    int n, i = 0, a, x;
    printf("enter the size of your array: ");
    if (scanf("%d", &n) != 1 || n <= 0) {
        fprintf(stderr, "Invalid array size\n");
        fclose(fp);
        return 1;
    }

    int la[n];
    while (i < n && fscanf(fp, "%d", &la[i]) == 1) {
        printf("%d ", la[i]);
        i++;
    }

    if (i == 0) {
        printf("No data read from file\n");
        fclose(fp);
        return 1;
    }

    printf("\nenter the data you want to search: ");
    if (scanf("%d", &x) != 1) {
        fprintf(stderr, "Invalid search value\n");
        fclose(fp);
        return 1;
    }

    binary(la,i,x);

    fclose(fp);
    return 0;
}