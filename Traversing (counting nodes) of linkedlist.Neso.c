#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
int CountingNodes(struct node *head)
{
    int count = 0;
    struct node *temp;
    temp = head;
    while(temp != NULL)
    {
        count++;
        temp = temp->link;
    }
    return count;
}
int main()
{
    struct node *head = NULL;
    //Allocating memory for **first node
    head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current = NULL;
    //Allocating memory for **second node
    current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    //linking second node with first node
    head->link = current;


    //Allocating memory for **third node
    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    //linking third node with second node
    head->link->link = current;

    //Calling CountingNodes() for counting nodes
    int NumberOfNodes = CountingNodes(head);
    printf("Total nodes: %d\n",NumberOfNodes);

    return 0;
}
