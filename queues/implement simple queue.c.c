#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 10
int a[Max];
int front=-1,rear=-1;
int count =0;
void add_ele();
void del_ele();
void dis_ele();
void main()
{
    int n;
    while (1)
    {
        /* code */
        printf("\n\n********************\n");
        printf("###Queue Operations###\n");
        printf("1,Insert an element\n");
        printf("2,Delete an element\n");
        printf("3,Display the queue\n");
        printf("4,Exit\n");
        printf("Enter choice:\n");
        scanf("%d",&n);
        switch(n)
        {
            case 1:
            add_ele();
            break;
            case 2:
            del_ele();
            break;
            case 3:
            dis_ele();
            break;
            case 4:
            exit(0);
            default:
            printf("\nWrong option\n");
        }

    }
    
}
void add_ele()
{
    if(rear==Max-1)
    {
        printf("Overflow\n");
        
    }    
    else if(rear==-1&&front==-1)
    {
        front=rear=0;
        printf("Enter element to be inserted:");
    scanf("%d",&a[rear]);
    count++;
    printf("\nInserted succesfully");
    }
    else{
        rear++;
        printf("Enter element to be inserted:");
    scanf("%d",&a[rear]);
    count++;
    printf("\nInserted succesfully");
    }
}
void del_ele()
{
    if(front==-1 || front>rear)
    {
        printf("deletion is not possible!");
        
    }
    else
    {
        int d=a[front];
        front++;
        //count--;
    printf("Deleted element:%d",d);
    }
}

void dis_ele()
{
    if (front==-1|| front>rear)
    {
        printf("Deletion is not possible!!");
    }
    else{
    for(int i=front;i<=rear;i++)
    {
        printf("+%d+",a[i]);
    }
    }
}