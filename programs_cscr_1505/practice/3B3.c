#include<stdio.h>
char grade(float m)
{
    if(m>=90)
        return 'A';
    else if(m>=80)
        return 'B';
    else if(m>=70)
        return 'C';
    else if(m>=60)
        return 'D';
    else
        return 'F';
}

int main()
{
    float m;
    printf("enter the marks:");
    scanf("%f",&m);
    printf("the grade is %c",grade(m));
    return 0;
}