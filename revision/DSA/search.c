#include<stdio.h>
#include<stdlib.h>

int search(int *a,int data,int n)
{
    for(int i=0;i<n;i++)
    {
        if(data==a[i])
        return i;
    }
    return -1;
}

int main(void)
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

    a = search(la, x, i);
    if (a == -1) {
        printf("data not found\n");
    } else {
        printf("data found at index %d\n", a);
    }

    fclose(fp);
    return 0;
}
