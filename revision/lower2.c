#include<stdio.h>
#include<conio.h>

void lower(char *x)
{
    int n;
    for(n=0;x[n]!='\0';n++)
    {
        if(x[n]>='A' && x[n]<='Z')
        {
            x[n]=x[n]+32;
        }
    }
}

int main()
{
    char arr[100];
    printf("enter your name");
    gets(arr);
    lower(arr);
    printf("%s",arr);
    return 0;
}