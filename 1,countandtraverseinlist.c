#include<stdio.h>
#include<stdlib.h>
struct node {
    int data;
    struct node *link;
};
void traveserce(struct node *head);
void main()
{
    struct node *head,*fir;
    head = malloc(sizeof(struct node));
    head->data = 4;
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
    current->link = head;
    head->link->link->link = current;
    traveserce(head);
}

void traveserce(struct node *head)
{
    struct node *ptr;
    ptr = head;
    int count=0;    // here we checking the link in ptr but not the link one
    if(ptr->link == NULL)
    {
        printf("No list is formed");
    }
    else
    {
        while(ptr!=NULL)
        {
            count++;
            printf("%d",ptr->data);
            ptr= ptr->link;
        }
        printf("%d",count);
    }
}