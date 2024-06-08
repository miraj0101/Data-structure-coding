#include<stdio.h>
//For using bool
#include<stdbool.h>
#define CAPACITY 3

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
        printf("queue is full.\n");
    }
    else
    {
        //Implementing circular array concept
        rear = (rear+1)%CAPACITY;
        queue[rear] = value;
        printf("Successfully added item.\n");
        totalItem++;
    }
}
int dequeue()
{
    if(isEmpty())
    {
        printf("Queue is empty.\n");
        return -1;
    }
    else
    {
        int num = queue[front];
        //Deleting front value
        queue[front] = -1;
        //Implementing circular array concept
        front = (front+1)%CAPACITY;
        totalItem--;
        return num;
    }
}
int main()
{
    enqueue(10);
    enqueue(20);
    enqueue(30);
    enqueue(40);
    printf("Dequeue value is: %d.\n",dequeue());
    printf("Dequeue value is: %d.\n",dequeue());
    printf("Dequeue value is: %d.\n",dequeue());
    printf("Dequeue value is: %d.\n",dequeue());
    enqueue(578);
    return 0;
}
