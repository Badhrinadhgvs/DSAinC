#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node* del_at_begin(struct node *head);
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
    head=del_at_begin(head);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->link;
    }
}
struct node* del_at_begin(struct node *head)
{
    struct node *ptr;
    ptr = head;
    ptr1 = head->link;
    ptr = ptr1;
    return head;
    
}
// Second type
struct node* del_at_begin(struct node *head)
{
    head = head->link;
    return head;
    
}


