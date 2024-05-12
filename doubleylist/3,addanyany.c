#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *nxt;
    struct node *prev;
};
struct node *head;
struct node *addAtAny(struct node *head);
void main()
{
    head=malloc(sizeof(struct node));
    head->nxt = NULL;
    head->prev = NULL;
    head->data = 45;
    struct node *curr;
    curr = malloc(sizeof(struct node));
    curr->nxt = NULL;
    curr->data = 78;
    curr->prev = head;
    head->nxt = curr;
    curr = malloc(sizeof(struct node));
    curr->nxt = NULL;
    curr->data = 49;
    curr->prev = head->nxt;
    head->nxt->nxt = curr;
    head = addAtAny(head);
    head = addAtAny(head);
    struct node *ptr;
    ptr = head;
    while(ptr!=NULL)
    {
        printf("%d->",ptr->data);
        ptr = ptr->nxt;
    }
    printf("END");
}
struct node *addAtAny(struct node *head)
{
    struct node *ptr,*new;
    ptr = head;
    int pos;
    new=malloc(sizeof(struct node));
    printf("Enter position to of the ment to be inserted:");
    scanf("%d",&pos);
    pos--;
    while(pos!=1)
    {
        if(pos>0){
        ptr=ptr->nxt;
        }
    }
    struct node *ptr1=ptr;
    //we will get position of the node as ptr
    new->prev = ptr;
    new->nxt = ptr->nxt;
    printf("Enter the data in the new node:");
    scanf("%d",&new->data);
    return head;
}