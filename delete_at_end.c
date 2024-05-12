#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node* del_at_end(struct node *head);
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
    head=del_at_end(head);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->link;
    }
}
struct node* del_at_end(struct node *head)
{
    struct node *ptr,*ptr1;
    ptr = head;
    while(ptr->link != NULL)
    {
        ptr1 = ptr;  // used to store the current address
        ptr = ptr->link; // used to store the link part of the address
    }
    ptr1->link= NULL;
    return head;
}
