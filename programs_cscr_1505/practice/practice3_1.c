#include<stdio.h>
int len(char *s)
{
    int i=0;
    while(s[i]!='\0')
        i++;
    return i;
}

void pal(char *s)
{
    int l=len(s);
    for(int i=0;i<l/2;i++)
    {
        if(s[i]!=s[l-1-i])
        {
            printf("not a palindrome");
            return;
        }
    }
    printf("palindrome");
}

int main()
{
    char s[100];
    printf("enter a string:");
    scanf("%s",s);
    pal(s);
    return 0;
}