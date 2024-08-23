#include <stdio.h>
#include <conio.h>
int main()
{
  char c;
  int f = 0;
  printf("Enter a character:");
  scanf("%c", &c);
  if (isalpha(c))
  {
    for (int i = 'A'; i <= 'Z'; i++)
    {
      if (c == i)
      {
        printf("%c is upper character", c);
        break;
      }
      for (int i = 'a'; i <= 'z'; i++)
      {
        if (c == i)
        {
          printf("%c is lower character", c);
          break;
        }
      }
    }
    else if (isnumeric(c))
    {
      printf("%c is an number", c);
    }
    else
    {
      printf("%c is special character", c);
    }
  }