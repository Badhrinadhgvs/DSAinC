//implement a normal queue
#include<stdio.h>
#include<stdlib.h>
#define Max 100
int stack[Max];
int front=-1;
int rear=-1;
void enqueue(int x)
{
    if(front==Max-1)
    {
        printf("\nQueue is full");
        return;
    }
    if(front==-1)
    {
        front++;
        rear++;
    }
    else{
        front++;
    }
    stack[front]=x;
}
void dequeue()
{
    if(front==-1)
    {
        printf("\nQueue is empty");
        return;
    }
    else{
        
    }
}