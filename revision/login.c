#include<stdio.h>
#include<conio.h>

void username(char *x, int n) 
{
    printf("enter your usrename: ");
    fgets(x,n,stdin);
}

void password(char *y, int n)
{
    char ch;
    int i=0;
    printf("enter your password: ");
    while(1)
    {
        ch=getch();
        if(ch=='\n')
        {
            *(y+i)='\0';
            break;
        }
        else if(ch==8)
        {
            if(i>0)
            {
                printf("\b \b");
                i--;
            }
        }
        else if(i<n-1)
        {
            *(y+i)=ch;
            i++;
            putchar('*');
        }
    }
    printf("\n");  

}

int main()
{
    char user[20], pass[20];
    username(user, sizeof(user));
    password(pass, sizeof(pass));
    printf("your username is %s \n", user);
    printf("your password is %s \n", pass);
    printf("user id , password saved successfully");

}
