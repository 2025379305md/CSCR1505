#include<stdio.h>

char grade(int marks)
{
    if(marks>=90)
        return 'A';
    else if(marks>=80)
        return 'B';
    else if(marks>=70)
        return 'C';
    else if(marks>=60)
        return 'D';
    else
        return 'F';
}

int main()
{
    int m;
    printf("enter your marks:");
    scanf("%d",&m);
    printf("%c",grade(m));
    return 0;
}