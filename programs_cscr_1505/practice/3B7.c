#include<stdio.h>

typedef struct
{
    float x;
    float y;
}coor;

int line(coor a,coor b,coor c)
{
    float m1,m2;
    m1=(b.y-a.y)/(b.x-a.x);
    m2=(c.y-a.y)/(c.x-a.x);
    if(m1==m2)
        return 1;
    else
        return 0;
}

int main()
{
    coor a,b,c;
    printf("enter the coordinates of first point:");
    scanf("%f%f",&a.x,&a.y);
    printf("enter the coordinates of second point:");
    scanf("%f%f",&b.x,&b.y);
    printf("enter the coordinates of third point:");
    scanf("%f%f",&c.x,&c.y);
    if(line(a,b,c))
        printf("the points are collinear");
    else
        printf("the points are not collinear");
    return 0;
}
