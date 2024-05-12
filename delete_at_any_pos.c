// based on value
#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
struct node* del_at_end(struct node *head,int x);
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
    head=del_at_end(head,90);
    while(head!=NULL)
    {
        printf("%d ",head->data);
        head=head->link;
    }
}
// delete based on data
struct node* del_at_end(struct node *head,int x)
{
    struct node *ptr,*ptr1;
    ptr = head;
    while((ptr->link != NULL)&&(ptr->data!=x))
    {
       ptr1 = ptr;
       ptr = ptr->link;
    }
    ptr1->link = ptr->link;
    return head;
    
}
