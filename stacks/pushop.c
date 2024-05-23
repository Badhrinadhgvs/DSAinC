#include<stdio.h>
#include<stdlib.h>
#define Max 4
int a[Max];
int top=-1;
void push(int x);
void print();
void isEmpty();
void isFull();
int pop();
void main()
{
     int choice, data;

    while (1) {
        printf("\nStack Operations Menu\n");
        printf("--------------------\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Print Stack\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter data to push: ");
                scanf("%d", &data);
                push(data);
                break;
            case 2:
                data = pop();
                if (data != -1) {
                    printf("Popped element: %d\n", data);
                }
                break;
            case 3:
                printStack();
                break;
            case 4:
                printf("Exiting...\n");
                return 0;
            default:
                printf("Invalid choice\n");
        }
    }
}

void push(int x)
{
    if(top==Max-1)
    {
        printf("Stack overflow");
        return ;
    }
    else 
    {
        top++;
        a[top]=x;
    }
}
void print()
{
    for(int i=top;i>=0;i--)
    {
        printf("%d  ",a[i]);
    }
}
int pop()
{
    int val;
    if(top==-1)
    {
        printf("Stack underflow");
        exit(0);
    }
    else
    {
        val = a[top];
        top=top-1;
        return val;
        
    }
}

void isEmpty()
{
    if(top==-1)
    {
        printf("\nStack is empty\n");
    }
    else
    {
        printf("\nStack is not empty\n");
    }
}
void isFull()
{
    if(top==Max-1)
    {
        printf("\nStack is Full\n");
    }
    else
    {
        printf("\nStack is not full\n");
    }
}
