#include<stdio.h>
#define CAPACITY 3

int stack[CAPACITY];
int top = -1;

void push(int value)
{
    if(top<CAPACITY-1)
    {
        top = top+1;
        stack[top] = value;
        printf("Successfully added item.\n");
    }
    else
        printf("No space.\n");
}
int pop()
{
    if(top>=0)
    {
        int num = stack[top];
        top = top - 1;
        return num;
    }
    else
    {
        printf("Empty stack.\n");
        return -1;
    }
}
int main()
{
    push(10);
    push(20);
    push(30);
    push(40);
    printf("Poped item: %d\n",pop());
    printf("Poped item: %d\n",pop());
    printf("Poped item: %d\n",pop());
    printf("Poped item: %d\n",pop());
    push(578);
    return 0;
}
