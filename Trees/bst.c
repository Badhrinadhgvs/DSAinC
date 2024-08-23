#include <stdio.h>
#include <stdlib.h>
struct bst
{
  /* data */
  int data;
  struct node *left;
  struct node *right;
};
struct bst *getnode()
{
  struct node *new = malloc(sizeof(struct bst));
  new->left = NULL;
  new->right = NULL;
  return new;
}
struct bst *insert(struct bst *root, int data)
{
  struct node *new = getnode();
  if (new == NULL)
  {
    printf("blaaaa");
  }
  else
  {
    if (root == NULL)
    {
      root = new;
      scanf("%d", &root->data);
      return root;
    }
  }
}
