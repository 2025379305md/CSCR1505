#include <stdio.h>
#include <stdlib.h>
#include<time.h>

int main()
{
    FILE *fp=fopen("C:\\Users\\shaya\\OneDrive\\Desktop\\c\\revision\\DSA\\text.txt","w");
    srand(time(0));
    for(int i=0;i<100;i++)
    {
        int num=rand()%100;
        fprintf(fp,"%d\n",num);
    }
    fclose(fp);
    return 0;
}