#include<stdio.h>
#define Max 20
#include<string.h>

int s[Max];
int top=-1;

void push(char c) {
    if(top == Max-1) {
        printf("Overflow\n");
    } else {
        top++;
        s[top] = c;
    }
}

char pop() {
    if(top == -1) {
        printf("Underflow\n");
        return '\0'; // Return a null character if underflow occurs
    } else {
        char x = s[top];
        top--;
        return x;
    }
}

int main() {
    char str[Max], str1[Max];
    printf("Enter the string: ");
    scanf("%s", str); // No & for array variable
    int length = strlen(str);
    
    for(int i = 0; i < length; i++) {
        push(str[i]);
    }
    
    for(int i = 0; i < length; i++) {
        str1[i] = pop();
    }
    str1[length] = '\0'; // Null-terminate the str1 array
    
    if (strcmp(str, str1) == 0) { // Check if the strings are equal
        printf("Palindrome\n");
    } else {
        printf("Not a Palindrome\n");
    }
    return 0;
}
