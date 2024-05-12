#include<stdio.h>
#include<stdlib.h>
#define Max 20
int a[Max];
int top=-1;
struct node{
    int data;
    struct node *link;
};
struct node *head,*ptr,*new,*ptr1;
struct node *Create(struct node *head);
struct node *Add_at_start(struct node *head);
struct node *reverse(struct node *head);
void print_ele(struct node *head);
void push(int x)
{
    if(top==Max-1)
    {
        printf("Overflow");
    }
    else{
        top++;
        a[top]=x;
    }
}
int pop()
{
    if(top==-1)
    {
        printf("Underflow");
    }
    else{
        int c=a[top];
        top--;
        return c;
    }
}
void main()
{
    head=Create(head);
    head=Add_at_start(head);
    head=Add_at_start(head);
    head=Add_at_start(head);
    print_ele(head);
    printf("\n\n");
    head=reverse(head);
    printf("Reversed:\n");
    print_ele(head);
}
struct node *Create(struct node *head){
    head = malloc(sizeof(struct node));
    head->link = NULL;
    int x;
    printf("Enter element in the first node:");
    scanf("%d",&x);
    head->data = x;
    return head;
}
struct node *Add_at_start(struct node *head)
{
    new = malloc(sizeof(struct node));
    int c;
    printf("Enter element in the node which is added in starting:");
    scanf("%d",&new->data);
    new->link = head;  
    head = new;
    return head;
}
void print_ele(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head = head->link;
    }
    printf("END");
}
struct node *reverse(struct node *head)
{
    ptr=head;
    while(ptr!=NULL)
    {
        push(ptr->data);
        ptr=ptr->link;
    }
    ptr=head;
    while(ptr!=NULL)
    {
        ptr->data=pop();
        ptr=ptr->link;
    }
    return head;
}
