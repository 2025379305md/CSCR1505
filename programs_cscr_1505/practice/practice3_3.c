#include<stdio.h>

int reverse(char *s)
{
    int i = 0;
    while (s[i] != '\0')
        i++;
    int len = i;
    char res[len + 1];
    for (i = 0; i < len; i++)
    {
        res[i] = s[len - 1 - i];
    }
    res[len] = '\0';
    printf("reversed string is %s", res);
    return 0;
}

int main()
{
    char s[100];
    printf("enter a string:");
    scanf("%s",s);
    reverse(s);
    return 0;
}