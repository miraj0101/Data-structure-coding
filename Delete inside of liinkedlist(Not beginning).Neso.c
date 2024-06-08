#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void DeleteAtInside(struct node *head,int position)
{
    struct node *current = head;
    struct node *previous = head;

    if(head == NULL)
        printf("List is already empty.\n");
    else
    {
        while(position != 1)
        {
            previous = current;
            current = current->link;
            position--;
        }
        previous->link = current->link;
        free(current);
        current = NULL;
    }
}
void PrintLinkedList(struct node *head)
{
    struct node *temp = NULL;
    temp = head;
    //Printing linked list
    while(temp != NULL)
    {
        printf("%d ",temp->data);
        temp = temp->link;
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

    //Allocating memory for **fourth node
    current = malloc(sizeof(struct node));
    current->data = 18;
    current->link = NULL;

    //linking fourth node with third node
    head->link->link->link = current;

    //Allocating memory for **fifth node
    current = malloc(sizeof(struct node));
    current->data = 28;
    current->link = NULL;

    //linking fifth node with fourth node
    head->link->link->link->link = current;

    printf("Primary linked list: ");
    PrintLinkedList(head);

    //Function calling for deleting
    int position = 3;
    DeleteAtInside(head,position);

    printf("\nAfter operation: ");
    //Function calling for printing linked list
    PrintLinkedList(head);

    return 0;
}


