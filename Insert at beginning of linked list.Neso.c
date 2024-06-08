#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node* InsertAtBeginning(struct node *head,int data)
{
    struct node *newHead = NULL;
    //Allocating memory for new node
    newHead = malloc(sizeof(struct node));
    newHead->data = data;
    newHead->link = NULL;

    //Linking new node in front of previous first node
    newHead->link = head;

    //Returning address of newHead
    return newHead;
}
void PrintLinkedList(struct node *head)
{
    struct node *ptr = NULL;
    ptr = head;
    //Printing linked list
    while(ptr != NULL)
    {
        printf("%d ",ptr->data);
        ptr = ptr->link;
    }
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

    printf("Primary linked list: ");
    PrintLinkedList(head);

    //Calling InsertAtBeginning() for adding new node at the beginning of linked list
    //head now contains address of new, first node
    printf("\nLinked list after operation: ");
    head = InsertAtBeginning(head,67);

    //Function calling for printing linked list
    PrintLinkedList(head);

    return 0;
}

