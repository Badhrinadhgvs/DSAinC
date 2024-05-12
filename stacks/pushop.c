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
    /*int data;
    push(1);
    push(2);
    push(3);
    push(4);
    data=pop();
    printf("Deleted element from Stack:%d\n",data);
    print();
    data=pop();
    printf("Deleted element from Stack:%d\n",data);
    print();*/
    isEmpty();
    isFull();
    print();
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