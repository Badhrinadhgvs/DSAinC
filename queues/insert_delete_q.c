



#include<stdio.h>
#include<stdlib.h>
#define Max 100
int a[Max];//queue-array dec
int front=-1,rear=-1;//dec
void enqueue(int x)
{
    if(rear == Max-1)
    {
        printf("Queue is full");
        return ;
    }
    if(front == -1)
    {
        front=0;
    }
    rear++;
    a[rear]=x;
    printf("Element %d is added",x);
}

void print() {
    // Check for empty queue
    if (front == -1) {
        printf("\nQueue is empty\n");
        return;
    }

    printf("\nQueue elements: ");
    for (int i = front; i <= rear; i++) {
        printf("%d ", a[i]); // Use printf for formatted output
    }
    printf("\n"); // Add newline character at the end
}

int main()
{
    enqueue(2);
    enqueue(3);
    enqueue(4);
    enqueue(5);
    print();
    return 0;
}
