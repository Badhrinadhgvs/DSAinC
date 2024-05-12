#include<stdlib.h>
#include<stdio.h>
struct node{
    int data;
    struct node *prev;
    struct node *nxt;
};
struct node *head;
struct node *addAtStart(struct node *head);
void main()
{
    head = malloc(sizeof(struct node));
    head->prev = NULL;
    head->nxt = NULL;
    head->data = 12;
    //head = addAtStart(head);
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
struct node *addAtStart(struct node *head)
{
    struct node *new=malloc(sizeof(struct node));
    new->prev = NULL;
    printf("Enter data in new node:");
    scanf("%d",&new->data);
    new->nxt=head;
    head = new;
    return head;
}
