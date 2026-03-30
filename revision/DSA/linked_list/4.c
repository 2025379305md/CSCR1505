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


void len(struct node *head)
{
    int count=0;
    struct node *temp=head;
    while(temp!=NULL)
    {
        count++;
        temp=temp->next;
    }
    printf("Length of the linked list is %d",count);
}

void delete(struct node **head, int pos)
{
    if(*head==NULL)
    {
        return;
    }
    else if(pos==1)
    {
        struct node*temp=*head;
        *head=(*head)->next;
        free(temp); 
    }
    else
    {
        struct node *temp=*head;
        for (int i=0;i<pos-2;i++)
        {
            temp=temp->next;
        }
        struct node *temp1=temp->next;
        temp->next=temp1->next;
        free(temp1);
    }
}


void main()
{
    struct node *head=NULL;
    insertend(&head,10);
    insertend(&head,20);
    insertend(&head,30);
    insertend(&head,40);
    insertend(&head,50);
    display(head);
    printf("\n");
    len(head);
    printf("\n");
    delete(&head,3);
    display(head);
}