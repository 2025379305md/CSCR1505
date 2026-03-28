#include <stdio.h>

int main()
{
    int x, y = 1;
    printf("Enter the number: ");
    scanf("%d", &x);
    while (x > 0)
    {
        y = y * x;
        x--;
    }
    printf("Factorial is: %d", y);
    return 0;
}