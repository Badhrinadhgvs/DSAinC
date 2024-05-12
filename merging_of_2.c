#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node* merg(struct node *head,struct node *head2);
void main()
{
    struct node *head,*fir,*head2;
    head = malloc(sizeof(struct node));
    head->data = 1;
    head->link = NULL;
    struct node *current;
    current = malloc(sizeof(struct node));
    current->data = 4;
    current->link = NULL;
    head->link = current;
    current = malloc(sizeof(struct node));
    current->data = 4;
    current->link = NULL;
    head->link->link = current;
    head2 = malloc(sizeof(struct node));
    head2->data = 90;
    head2->link = NULL;
    //head->link->link = current;
    current = malloc(sizeof(struct node));
    current->data = 90;
    current->link = NULL;
    head2->link = current;
    current = malloc(sizeof(struct node));
    current->data = 143;
    current->link = NULL;
    head2->link->link = current;
    head=merg(head,head2);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->link;
    }
}
struct node* merg(struct node *head,struct node *head2)
{
    struct node *ptr,*ptr1;
    ptr = head;
    ptr1 = head2;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    ptr->link = head2;
    return head;
}