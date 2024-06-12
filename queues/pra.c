// implement a normal queue
#include <stdio.h>
#include <stdlib.h>
#define Max 100
int stack[Max];
int front = -1;
int rear = -1;
void enqueue(int x)
{
    if (front == Max - 1)
    {
        printf("\nQueue is full");
        return;
    }
    if (front == -1)
    {
        front++;
        rear++;
    }
    else
    {
        front++;
    }
    stack[front] = x;
}
void dequeue()
{
    if (front == -1)
    {
        printf("\nQueue is empty");
        return;
    }
    else
    {
        int x = stack[rear];
        rear++;
        printf("\nDeleted element is %d", x);
    }
}

int main()
{
    enqueue(1);
    enqueue(2);
    enqueue(3);
    enqueue(4);
    for (int i = rear; i <= front; i++)
    {
        printf("<-%d->", stack[i]);
    }
}

/// Queue front at start rear at end
#include <stdio.h>
#include <stdlib.h>
#define Max 100
int a[Max];
int front = -1, rear = -1;
void inject(int x)
{
    if (rear == -1 && front == -1)
    {
        front = 0;
        rear = 0;
    }
    else if (rear == Max - 1)
    {
        printf("\nInsertion not possible\n");
        return;
    }
    else
    {
        rear++;
    }
    a[rear] = x;
}
void eject()
{
    if (front == -1 && rear == -1)
    {
        printf("\nDeletion not possible\n");
        return;
    }
    if (front == rear)
    {
        front = rear = -1;
        return;
    }
    front++;
    printf("\nDeletion Done\n");
}

void print()
{
    if (front == -1 && rear == -1)
    {
        printf("\nDeletion not possible\n");
        return;
    }
    for (int i = front; i < rear; i++)
    {
        printf("<%d>", a[i]);
    }
}
int main()
{
    inject(1);
    inject(2);
    inject(3);
    inject(4);
    inject(5);
    print();
    eject();
    print();
    eject();
    print();
    eject();
    print();
    eject();
    print();
}