#include<stdio.h>
#define CAPACITY 5

int stack[CAPACITY];
int top = -1;

void printStack()
{
    for(int i=0; i<=top; i++)
    {
        printf("%d ",stack[i]);
    }
    printf("\n");
}
void push(int value)
{
    if(top<CAPACITY-1)
    {
        top = top+1;
        stack[top] = value;
        printStack();
    }
    else
        printf("Overflow\n");
}
int pop()
{
    if(top>=0)
    {
        int num = stack[top];
        top = top - 1;
        printStack();
        return num;
    }
    else
    {
        printf("Underflow\n");
        return -1;
    }
}
int main()
{
    pop();
    push(1);
    pop();
    push(2);
    push(4);
    push(5);
    push(6);
    push(7);
    push(1);
    pop();
    return 0;
}

