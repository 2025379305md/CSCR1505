#include<stdio.h>
#include<stdlib.h>

void main()
{
    FILE *fp=fopen("C:\\Users\\shaya\\OneDrive\\Desktop\\c\\revision\\DSA\\text.txt","r");

    int data;
    while(fscanf(fp,"%d",&data)!=EOF)
    {
        printf("%d ",data);
    }

    fclose(fp);

}   