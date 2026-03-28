#include<stdio.h>
#include<stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *newnode(int value)
{
    struct node *newnode=(struct node*)malloc(sizeof(struct node));
    newnode->data=value;
    newnode->next=NULL;
    return newnode;
}

void *insertbeg(struct node **head,int value)
{
    struct node *newnode1=newnode(value);
    newnode1->next=*head;
    *head=newnode1;
    return *head;
}

void insertend(struct node **head,int value)
{
    struct node *newnode1=newnode(value);
    if (*head==NULL)
    {
        *head=newnode1;
        return; 
    }
    struct node *temp=*head;
    while(temp->next!=NULL)
    {
        temp=temp->next;
    };
    temp->next=newnode1;
}

void insertpos(struct node **head,int value,int pos)
{
    struct node *newnode1=newnode(value);
    if(pos==1)
    {
        newnode1->next=*head;
        *head=newnode1;
        return;
    }
    struct node *temp=*head;
    for (int i=0;i<pos-2;i++)
    {
        temp=temp->next;
    }
    newnode1->next=temp->next;
    temp->next=newnode1;
}

void display (struct node *head)
{
    struct node *temp=head;
    while(temp!=NULL)
    {
        printf("%d->",temp->data);
        temp=temp->next;
    }
    printf("NULL");
}

