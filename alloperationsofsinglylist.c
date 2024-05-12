#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node *link;
};
struct node *head,*ptr,*new,*ptr1;
struct node *Create(struct node *head);
struct node *Add_at_start(struct node *head);
struct node *Add_at_end(struct node *head);
struct node *Add_at_any(struct node *head);
struct node *delete_at_start(struct node *head);
struct node *delete_at_end(struct node *head);
struct node *delete_at_any(struct node *head);
struct node *search_ele(struct node *head);
struct node *print_ele(struct node *head);
void main()
{
    int ops;
    do{
        printf("@@@@@@@@@@@@@ Operations @@@@@@@@@@@@@@");
        printf("\n1,Create list\n");
        printf("2,Add element at start\n");
        printf("3,Add element at Ending\n");
        printf("4,Add element at a fixed position\n");
        printf("5,Delete element at start\n");
        printf("6,Delete element at Ending\n");
        printf("7,Delete element at a fixed position\n");
        printf("8,Print the elements\n");
        printf("9,search element in list\n");
        printf("10,EXIT\n");
        printf("Enter your choice:");
        scanf("%d",&ops);
        switch(ops)
        {
            case 1:
            head = Create(head);
            break;
            case 2:
            head = Add_at_start(head);
            break;
            case 3:
            head = Add_at_end(head);
            break;
            case 4:
            head = Add_at_any(head);
            break;
            case 5:
            head = delete_at_start(head);
            break;
            case 6:
            head = delete_at_end(head);
            break;
            case 7:
            head = delete_at_any(head);
            break;
            case 8:
            search_ele(head);
            break;
            case 9:
            print_ele(head);
            break;
            case 10:
            exit(0);
            break;
            
        }
    }while(ops!=11);
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
struct node *Add_at_end(struct node *head){
    ptr = head;
    while(ptr->link!=NULL)
    {
        ptr = ptr->link;
    }
    new = malloc(sizeof(struct node));
    new -> link = NULL;
    printf("Enter element in the node which is needed to adding in the ending:");
    scanf("%d",&new->data);
    ptr->link = new;
    return head;
}
struct node *Add_at_any(struct node *head)
{
    int m;
    printf("Enter position of the new element:");
    scanf("%d",&m);
    new = malloc(sizeof(struct node));
    printf("Enter data to new node:");
    scanf("%d",&new->data);
    ptr = head;
    m--;
    while(m!=1)
    {
        ptr = ptr->link;
        m--;
    }
    ptr1 = ptr->link;
    ptr->link = new;
    new->link = ptr1;
    return head;
    
}
struct node *delete_at_start(struct node *head)
{
    head = head->link;
    return head;
}
struct node *delete_at_end(struct node *head)
{
    ptr = head;
    //ptr = ptr->link;
    while(ptr->link!=NULL)
    {
        ptr1 = ptr;
        ptr = ptr->link;
    }
    ptr1->link = NULL;
    return head;
    
}
struct node *delete_at_any(struct node *head)
{
    int g;
    ptr = head;
    printf("Enter data to be deleted:");
    scanf("%d",&g);
    while((ptr->link!=NULL)&&(ptr->data!=g))
    {
        ptr1 = ptr;
        ptr = ptr->link;
    }
    ptr1->link = ptr->link;
    free(ptr);
    return head;
    
}
struct node *search_ele(struct node *head)
{
    int r;
    printf("Enter element to be searched:");
    scanf("%d",&r);
    ptr = head;
    int pos =1;
    while((ptr->link !=NULL )&&(ptr->data != r))
    {
        pos++;
        ptr = ptr->link;
    }
    printf("Position is:%d",pos);
    printf("\n");
}

struct node *print_ele(struct node *head)
{
    while(head!=NULL)
    {
        printf("%d->",head->data);
        head = head->link;
    }
    printf("END");
}





