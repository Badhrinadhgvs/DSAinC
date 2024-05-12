#include<stdio.h>  // second pos lo ichi add chesamu and swap chesamu
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node* add_at_begin(struct node *head);
void main()
{
    struct node *head,*fir;
    head = malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;
    struct node *current;
    current = malloc(sizeof(struct node));
    current->data = 4;
    current->link = NULL;
    head->link = current;
    current = malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head->link->link = current;
    current = malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head->link->link->link = current;
    head=add_at_begin(head);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->link;
    }
}

struct node* add_at_begin(struct node *head)
{
    struct node *ptr,*new;
    int ptr1;
    ptr = head->link;
    ptr1 = head->data;
    new = malloc(sizeof(struct node));
    new->data = 143;
    new->link = ptr;
    head->data = new->data;
    new->data = ptr1;
    head->link = new;
}
