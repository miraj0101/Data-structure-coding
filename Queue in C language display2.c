#include<stdio.h>
//For using bool
#include<stdbool.h>
#define CAPACITY 5

int queue[CAPACITY];
int front=0,rear=-1,totalItem=0;

bool isFull()
{
    if(totalItem==CAPACITY)
        return true;
    else
        return false;
}
bool isEmpty()
{
    if(totalItem==0)
        return true;
    else
        return false;
}
void enqueue(int value)
{
    if(isFull())
    {
        printf("Overflow\n");
    }
    else
    {
        //Implementing circular array concept
        rear = (rear+1)%CAPACITY;
        queue[rear] = value;
        printQueue();
        totalItem++;
    }
}
int dequeue()
{
    if(isEmpty())
    {
        printf("Underflow\n");
        return -1;
    }
    else
    {
        int num = queue[front];
        //Deleting front value
        queue[front] = 0;
        //Implementing circular array concept
        front = (front+1)%CAPACITY;
        printQueue();
        totalItem--;
        return num;
    }
}
void printQueue()
{
    for(int i=0; i<CAPACITY; i++)
    {
        printf("%d ",queue[i]);
    }
    printf("\n");
}
int main()
{
    dequeue();
    enqueue(10);
    enqueue(20);
    enqueue(50);
    dequeue();
    dequeue();
    dequeue();
    enqueue(578);
    return 0;
}

