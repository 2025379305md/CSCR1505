#include<stdio.h>
#include<string.h>

void lower(char *x)
{
    while(*x!='\0')
    {
        if(*x>='A' && *x<='Z')
        {
            *x=*x+32;
        }
        x++;
    }
}

int main()
{
    char str[100];
    printf("Enter a string: ");
    fgets(str, sizeof(str), stdin);
    str[strcspn(str, "\n")] = 0;  // Remove newline
    lower(str);
    printf("Lowercase string: %s", str);
    return 0;
}