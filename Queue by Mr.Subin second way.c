#include<stdio.h>
#include<stdbool.h>
#define q_size 3

typedef struct
{
    int data[q_size];
    int front,rear,totalItem;
} queue;

//structure "queue" type ***global variable my_queue
queue my_queue;

bool isFull(queue *q4)
{
    if(q4->totalItem==q_size)
        return true;
    else
        return false;
}
bool isEmpty(queue *q5)
{
    if(q5->totalItem==0)
        return true;
    else
        return false;
}
void enqueue(queue *q1,int item)
{
    if(isFull(&my_queue))
    {
        printf("Sorry, queue is full\n");
        return;
    }
    //Circular array concept
    q1->rear = (q1->rear+1)%q_size;
    q1->data[q1->rear]=item;
    q1->totalItem = q1->totalItem+1;
    printf("Successfully added item %d\n",item);
}
int dequeue(queue *q2)
{
    if(isEmpty(&my_queue))
    {
        printf("Sorry, queue is empty\n");
        return -1;
    }
    int frontItem = q2->data[q2->front];
    //Circular array concept
    q2->front = (q2->front+1)%q_size;
    q2->totalItem = q2->totalItem-1;
    return frontItem;
}
void printQueue(queue *q3)
{
    int i;
    printf("Our queue: ");
    for(i=0;i<q_size;i++)
    {
        printf("%d ",q3->data[i]);
    }
}
int main()
{
    my_queue.front=0;
    my_queue.rear=-1;
    my_queue.totalItem=0;

    enqueue(&my_queue,10);
    enqueue(&my_queue,20);
    enqueue(&my_queue,30);
    enqueue(&my_queue,40);
    printf("Dequeue: %d\n",dequeue(&my_queue));
    enqueue(&my_queue,40);

    printQueue(&my_queue);


    return 0;
}

