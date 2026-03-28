//traversing linked list in forward direction//

#include<stdio.h>
#include<stdlib.h>

struct node{
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

    struct node *root=first;
    first->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=last;
    last->next=NULL;

    struct node *temp=first;
    for(int i=1;i<=5;i++)
    {
        printf("enter the data of %d node",i);
        scanf("%d",&temp->data);
        temp=temp->next; 
    }
    temp=first;
    for(int j=1;j<=5;j++)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}
