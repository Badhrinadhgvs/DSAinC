#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *getnode()
{
    struct node *new=malloc(sizeof(struct node));
    new->link=NULL;
    return new;
}
struct node *insert_at_end(struct node *head)
{
    struct node *new=getnode();
    printf("\nEnter the data into new node:");
    scanf("%d",&new->data);
    if(new==NULL)
    {
        printf("\nNo memory");
    }
    else{
        if (head==NULL)
        {
            head=new;
        }
        else{
            new->link=head;
            head=new;
        }
    }
    return head;
}
struct node *del_at_end(struct node *head)
{
    struct node *ptr=head,*ptr1;
    
    if(ptr->link==NULL)
    {
        head=head->link;
    }
    else
    {
        while(ptr->link!=NULL)
        {
            ptr1=ptr;
            ptr=ptr->link;
            
        }
        ptr1->link=NULL;
        printf("\nThe Deleted item from S.L.L is :%d\n",ptr->data);
        free(ptr);
    }
    return head;

}
void trav(struct node *head)
{
    
    struct node *ptr=head;
    while(ptr!=NULL)
    {
        printf("%d --> ",ptr->data);
        ptr=ptr->link;
    }
    printf("NULL\n");
}
int main()
{
    int op;
    struct node *head;
    while(1){
        printf("1.Insert at the Begining 2.Delete at the End 3.Traverse the List 4.Exit\n");
        scanf("%d",&op);
        switch(op){
            case 1:
            head=insert_at_end(head);
            break;
            case 2:
            if(head==NULL)
            {
                printf("\nSingle liked list is empty\n");
            }
            else
            {
                head=del_at_end(head);
            }
            break;
            case 3:
            if(head==NULL)
            {
                printf("\nSingle liked list is empty\n");
            }
            else
            {
                printf("The Elements in S.L.L are:\n");
                trav(head);
            }
            break;
            case 4:
            exit(0);
        }
    }
    return 0;
}