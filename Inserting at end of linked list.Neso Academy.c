#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void InsertAtEnd(struct node *head,int data)
{
    //Assigning NULL is not mandatory
    struct node *ptr ,*temp;
    //Creating the node which will be inserted at end
    temp = malloc(sizeof(struct node));
    temp->data = data;
    temp->link = NULL;

    //Using ptr for traversing and finding address part of last node
    ptr = head;
    while(ptr->link != NULL)
    {
        ptr = ptr->link;
    }
    //Adding the new node at the end of the list
    ptr->link = temp;
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

    //Calling InsertAtEnd() for adding new node at the end of linked list
    InsertAtEnd(head,67);

    printf("\nLinked list after operation: ");
    //Calling PrintLinkedList() for printing linked list
    PrintLinkedList(head);

    return 0;
}


