#include<stdio.h>
#include<conio.h>
int input (int*x)
{
    int n,i=0;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
        printf("Enter element %d: ",i);
        i--;
        scanf("%d",&x[i]);
        i++;
    }
    return n;
}

int sum(int *x, int n)
{
    int s=0,i;
    for(i=0;i<n;i++)
    {
        s=s+x[i];
    }
    return s;
}

float avg(int *x, int n)
{
    int s;
    float avg;
    s=sum(x,n);
    avg=(float)s/n;
    return avg;
}

int min(int *x,int n)
{
    int min=x[0],i;
    for(i=1;i<n;i++)
    {
        if(min<=x[i])
        {
            min=min;
        }
        else
        {
            min=x[i];
        }
    }
    return min;
}

int max(int *x, int n)
{
    int max=x[0],i;
    for(i=1;i<n;i++)
    {
        if(max<=x[i])
        {
            max=max;
        }
        else
        {
            max=x[i];
        }
    }
    return max; 
}

 
int main ()
{
    int arr[100],num,i;
    float result;
    while(1)
    {
        num=input (arr);
        printf("The elements in the array are:\n");
        for(int i=0;i<num;i++)
        {
        printf("%d ",arr[i]);
        }
        printf("press 1 for sum \n"
               "press 2 for avg \n"
               "press 3 for min \n"
               "press 4 for max \n"
               "press 5 for exit\n");
        // Add logic here to read user choice and handle options, e.g., if choice == 5, break;
        scanf("%d", &i);
        if(i==5)
        {
            printf("exiting the program");
            return 0;
        }
        else
        {
            switch (i)
            {
                case 1:
                    result=sum(arr,num);
                    printf("Sum: %d\n", result);
                    break;
                case 2:
                    result=avg(arr,num);
                    printf("Average: %.2f\n", result);
                    break;
                case 3:
                    result=min(arr,num);
                    printf("Minimum: %d\n", result);
                    break;
                case 4:
                    result=max(arr,num);
                    printf("Maximum: %d\n", result);
                    break;
                default:
                    printf("Invalid choice\n");
                    break;
            }
        }
    }
    return 0;
}