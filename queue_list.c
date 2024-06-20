#include <stdio.h>
#include <conio.h>
#include <stdlib.h>
struct node
{
  int data;
  struct node *nxt;
};
// initialized front and rear
struct node *front = NULL, *rear;
struct node *getnode()
{
  struct node *new = malloc(sizeof(struct node));
  new->nxt = NULL;
  return new;
}
void Enqueue(int x)
{
  struct node *new = getnode();
  if (new == NULL)
  {
    printf("\nMemory allocation failed");
  }
  else
  {
    new->data = x;
    new->nxt = NULL;
    if (front == NULL)
    {
      front = new;
      rear = new;
    }
    else
    {
      rear->nxt = new;
      rear = new;
    }
    printf("\nSuccessfully inserted");
  }
}
// DEQUEUE
void DEQUE()
{
  if (front == NULL)
  {
    printf("\nQueue is Empty");
  }
  else
  {
    if (front == rear)
    {
      front = rear = NULL;
    }
    else
    {
      struct node *x = front;
      front = front->nxt;
      printf("\nDeleted element is %d", x->data);
      free(x);
    }
  }
}

void display()
{
  struct node *ptr = front;
  if (front == NULL)
  {
    printf("\nQueue is Empty");
  }
  else
  {
    while (ptr != NULL)
    {
      printf("%d-->", ptr->data);
      ptr = ptr->nxt;
    }
  }
}
void isEmpty()
{
  if (front == NULL)
  {
    printf("\nQueue is Empty");
  }
  else
  {
    printf("\nQueue is not empty");
  }
}

void size()
{
  int i = 0;
  struct node *ptr = front;
  while (ptr != NULL)
  {
    i++;
    ptr = ptr->nxt;
  }
  printf("\nSize is :%d", i);
}

/// Driver Code

int main()
{
  int op, ele;
  while (1)
  {
    printf("\n1,Enqueue 2,Dequeue 3,Display 4,isEmpty 5, Size 6,Exit");
    scanf("%d", &op);
    switch (op)
    {
    case 1:
      printf("\nEnter element:");
      scanf("%d", &ele);
      Enqueue(ele);
      break;
    case 2:
      DEQUE();
      break;
    case 3:
      display();
      break;
    case 4:
      isEmpty();
      break;
    case 5:
      size();
      break;
    case 6:
      exit(0);
    }
  }
}