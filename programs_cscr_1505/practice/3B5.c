#include<stdio.h>

typedef struct
{
    char name[50];
    int age;
} person;

person min(person a, person b, person c)
{
    if(a.age < b.age&& a.age < c.age)
        return a;
    else if(b.age < c.age)
        return b;
    else
        return c;
}

int main()
{
    person a,b,c;
    printf("enter the name and age of first person:");
    scanf("%s%d",a.name,&a.age);
    printf("enter the name and age of second person:");
    scanf("%s%d",b.name,&b.age);
    printf("enter the name and age of third person:");
    scanf("%s%d",c.name,&c.age);
    person x=min(a,b,c);
    printf("the youngest person is %c with age %d",x.name[0],x.age);
    return 0;
}