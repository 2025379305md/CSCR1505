#include <stdio.h>

int anagram(char *s1, char *s2)
{
    int i = 0;
    char cs1[128] = {0}, cs2[128] = {0};
    char ch;

    // Count characters of s1
    for(i = 0; s1[i] != '\0'; i++)
    {
        ch = s1[i];
        cs1[(unsigned char)ch]++;
    }

    // Merge uppercase and lowercase for s1
    for(i = 65; i <= 90; i++)
    {
        cs1[i] += cs1[i + 32];
        cs1[i + 32] = 0;
    }

    // Count characters of s2
    for(i = 0; s2[i] != '\0'; i++)
    {
        ch = s2[i];
        cs2[(unsigned char)ch]++;
    }

    // Merge uppercase and lowercase for s2
    for(i = 65; i <= 90; i++)
    {
        cs2[i] += cs2[i + 32];
        cs2[i + 32] = 0;
    }

    // Compare frequency arrays
    for(i = 0; i < 128; i++)
    {
        if(cs1[i] != cs2[i])
        {
            printf("not an anagram :)\n");
            return 0;
        }
    }

    printf("anagram :(\n");
    return 1;
}

int main()
{
    char t1[25],t2[25];
    printf("enter 1st string  \n");
    gets(t1);
    printf("enter 2nd string\n");
    gets(t2);
    anagram(t1,t2);
    return 0;
}
