// program for infix->postfix
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<ctype.h>
#define Max 100
char infix[Max],postfix[Max];
char stack[Max];
int top=-1,top1=-1;
void push(char c)
{
    top++;
    stack[top]=c;
}
char pop()
{
    char x=stack[top];
    top--;
    return x;
}
int preci(char c)
{
    if(c=='(')
    {
        return 0;
    }
    else if(c=='+'||c=='-')
    {
        return 1;
    }
    else if(c=='*'||c=='/')
    {
        return 2;
    }
}
int isempty()
{
    if(top==-1)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}
void push_into_out()
{
    top1++;
    postfix[top1];
}
void Print_ele()
{
    for(int i=0; i<strlen(infix); i++)
    {
        if(isalpha(infix[i]))
        {
            push_into_out(infix[i]);
        }
        else if(infix[i]=='(')
        {
            push(infix[i]);
        }
        else if(infix[i]==')')
        {
            while(!isempty() && stack[top]!='(')
            {
                push_into_out(pop());
            }
            pop(); // Pop the '('
        }
        else
        {
            while(!isempty() && preci(stack[top])>=preci(infix[i]))
            {
                push_into_out(pop());
            }
            push(infix[i]);
        }
    }
    while(!isempty()) // Pop the remaining operators
    {
        push_into_out(pop());
    }
    postfix[top1+1] = '\0'; // Null-terminate the string
    printf("Postfix Expression: %s\n", postfix);
}

int main()
{
    printf("Enter Expression:");
    scanf("%s",infix);
    Print_ele();
}