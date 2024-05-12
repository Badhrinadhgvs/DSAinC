#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *nxt;
    struct node *prev;
};
struct node *head;
struct node *addAtEnd(struct node *head);
void main()
{
    head=malloc(sizeof(struct node));
    head->nxt = NULL;
    head->prev = NULL;
    head->data = 45;
    head = addAtEnd(head);
    head = addAtEnd(head);
    struct node *ptr;
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->nxt;
    }
    printf("END");
}
struct node *addAtEnd(struct node *head)
{
    struct node *ptr;
    ptr = head;
    while(ptr->nxt!=NULL)
    {
        ptr = ptr->nxt;
    }
    struct node *new=malloc(sizeof(struct node));
    new->nxt = NULL;
    new->prev = ptr;
    ptr->nxt = new;
    printf("Enter data in the new node:");
    scanf("%d",&new->data);
    return head;
    
}