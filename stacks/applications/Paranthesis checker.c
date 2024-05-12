#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#define Max 20
char a[Max];
int top=-1;
void push(char c)
{
    if(top==Max-1)
    {
        printf("Overflow");
    }
    else
    {
        a[++top]=c;
    }
}
char pop()
{
    if(top==-1)
    {
        printf("Underflow");
    }
    else{
        /*int t=a[top];
        top--;*/
        return a[top--];
    }
}

void main()
{
    char exp[Max];
    int flag=1;
    printf("\nEnter expression:\n");
    gets(exp);
    for(int i=0;i<strlen(exp);i++)
    {
        if(exp[i]=='{'||exp[i]=='('||exp[i]=='[')
        {
            push(exp[i]);
        }
        if(exp[i]=='}'||exp[i]==')'||exp[i]==']')
        {
            if(top==-1)
            {
                flag=0;
            }
            else
            {
                int temp=pop();
                if(exp[i]=='}'&&(temp=='['||temp=='(')){
                flag=0;
                    
                }
                if(exp[i]==']'&&(temp=='('||temp=='{')){
                flag=0;
                    
                }
                if(exp[i]==')'&&(temp=='['||temp=='{')){
                flag=0;
                    
                }
            }
        }
    }
    if(top>=0)
    {
        flag=0;
    }
    if(flag==0)
    {
        printf("Invalid expression!!");
    }
    else
    {
        printf("Valid expression");
    }
}