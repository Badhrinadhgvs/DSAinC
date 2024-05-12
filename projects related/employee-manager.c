//Employee details manager
//stores empname,empnumber,age,salary,department

//Data structure:Linked List

#include<stdio.h>
#include<stdlib.h>
#include<string.h> 
struct node
{
    char empname[20];
    char empnumber[10];
    float sal;
    int age;
    char dep[10];
    char gender[7];
    //data part ends
    struct node *link;
};
//node creation ends


struct node *head;//creating head


struct node *insert_into_list(struct node *head)//assuming adding into last of the list
{
    struct node *new=malloc(sizeof(struct node));
    printf("\nEnter Employee number:");
    scanf("%s",&new->empnumber);
    printf("\nEnter Employee name:");
    scanf("%s",&new->empname);
    printf("\nEnter Employee salary:");
    scanf("%f",&new->sal);
    printf("\nEnter Employee age:");
    scanf("%d",&new->age);    
    printf("\nEnter Employee department:");
    scanf("%s",&new->dep);
    printf("\nEnter Employee Gender:");
    scanf("%s",&new->gender);
    printf("Employee details:");
    printf("%s\t|%s\t|%f\t|%d\t|%s\t|%s\t|",new->empnumber,new->empname,new->sal,new->age,new->dep,new->gender);

    if(head==NULL)
    {
        new->link=NULL;
        head=new;
        return head;
    }
    struct node *ptr=head;
    while(ptr->link!=NULL)
    {
        ptr=ptr->link;
    }
    new->link=NULL;
    ptr->link=new;
    return head;
}
void show_employees(struct node *head)
{
    struct node *ptr=head;
    printf("Employees Details:\n");
    while(ptr->link!=NULL)
    {
        printf("%s\t|%s\t|%f\t|%d\t|%s\t|%s\t|\n",ptr->empnumber,ptr->empname,ptr->sal,ptr->age,ptr->dep,ptr->gender);
        ptr=ptr->link;


    }
}

void search_employee(struct node *head)
{
    char key[10];
    printf("\nEnter employee number:");    
    scanf("%s",key);
    struct node *ptr=head;
    while(ptr!=NULL && strcmp(ptr->empnumber,key)!=0)
    {
        ptr=ptr->link;
    }
    if(strcmp(ptr->empnumber,key)==0)
    {
        printf("Employee details:");
        printf("%s\t|%s\t|%f\t|%d\t|%s\t|%s\t|\n",ptr->empnumber,ptr->empname,ptr->sal,ptr->age,ptr->dep,ptr->gender);
    }
    else{
        printf("\nEmployee not found or do not exist");
    }
}
struct node *delete_employee(struct node *head)
{
    char key[10];
    printf("\nEnter employee number:");    
    scanf("%s",&key);
    struct node *ptr=head;
    struct node *ptr1;
    while(ptr!=NULL && strcmp(ptr->empnumber,key)!=0)
    {
        ptr1=ptr;
        ptr=ptr->link;
    }
    if(ptr->empnumber==key)
    {
        ptr1->link=ptr->link;
        free(ptr);
        printf("\nEmployee removed succesfully");
    }
    return head;
}


//---------Functions part ends----------



//-------Driver Code---------

int main()
{
    int op;
    while(1){
        printf("---Employee Details Portal---");
        printf("\n1,Add Employee");
        printf("\n2,Remove Employee");
        printf("\n3,Show employee details");
        printf("\n4,Show all employees");
        printf("\n5,Exit");
        printf("\nEnter your option:");
        scanf("%d",&op);
        switch (op)
        {
        case 1:
            /* code */
            head=insert_into_list(head);
            break;
        case 2:
            head=delete_employee(head);
            break;
        case 3:
            search_employee(head);
            break;
        case 4:
            show_employees(head);
            break;
        case 5:
            exit(0);    
        default:
            printf("\nPlease enter correct option\n");
            break;
        }


    }
}