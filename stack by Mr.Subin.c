#include<stdio.h>
#define capacity 3

typedef struct
{
    int top;
    int data[capacity];
} stack;
void push(stack *s,int item)
{
    if(s->top<capacity-1)
    {
        s->top=s->top+1;
        s->data[s->top]=item;
        printf("Successfully added item %d\n",item);
    }
    else
    {
        printf("Exception from push! Stack full\n");
    }
}
int pop(stack *s)
{
    int item;
    if(s->top>=0)
    {
        item=s->data[s->top];
        s->top=s->top-1;
        return item;
    }
    else
    {
        printf("Exception from pop! Stack empty\n");
        return -1;
    }
}
int main()
{
    stack my_stack;
    int item;

    my_stack.top=-1;
    printf("Implementing my stack in C\n");
    push(&my_stack,10);
    push(&my_stack,20);
    push(&my_stack,30);
    push(&my_stack,40);
    push(&my_stack,50);

    printf("Pop item %d\n",pop(&my_stack));
    printf("Pop item %d\n",pop(&my_stack));
    printf("Pop item %d\n",pop(&my_stack));
    printf("Pop item %d\n",pop(&my_stack));

    return 0;
}
