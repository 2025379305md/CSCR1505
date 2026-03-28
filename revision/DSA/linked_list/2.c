//traversing linked list in forward and backward direction//

#include<stdio.h>
#include<stdlib.h>

struct node{
    struct node *prev;
    int data;
    struct node *next;
};

int main()
{
    struct node *first=NULL;
    struct node *second=NULL;
    struct node *third=NULL;
    struct node *fourth=NULL;
    struct node *last=NULL;
    first=(struct node*)malloc(sizeof(struct node));
    second=(struct node*)malloc(sizeof(struct node));
    third=(struct node*)malloc(sizeof(struct node));
    fourth=(struct node*)malloc(sizeof(struct node));
    last=(struct node*)malloc(sizeof(struct node));

    struct node *temp;
    temp=(struct node*)malloc(sizeof(struct node));
    temp->next=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=last;
    last->next=NULL;
    
    struct node *root;
    root=(struct node*)malloc(sizeof(struct node));
    root->prev=last;
    last->prev=fourth;
    fourth->prev=third;
    third->prev=second;
    second->prev=first;
    first->prev=temp;


    for(int i=1;i<=5;i++)
    {
        printf("enter the data of %d node",i);
        scanf("%d",&temp->next->data);
        temp=temp->next; 
    }

    temp=first;


    for(int j=1;j<=5;j++)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }

    printf("NULL\n");
    printf("NULL");

    for(int k=1;k<=5;k++)
    {
        printf("<-%d",root->prev->data);
        root=root->prev;
    }


}
