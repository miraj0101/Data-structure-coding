#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
struct node* DeleteFirstNode(struct node *head)
{
    if(head == NULL)
    {
        printf("Linked list is empty.\n");
        return 0;
    }
    else
    {
        struct node *temp;
        temp = head;
        //Deleted first node
        head = head->link;
        //freed memory acquired by temp
        free(temp);
        temp = NULL;
        return head;
    }
}
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

    int position;
    printf("Enter position of deletion: ");
    scanf("%d",&position);

    //Primary linked list
    printf("Primary linked list: ");
    PrintLinkedList(head);
    printf("\n");

    if(position == 1)
        head = DeleteFirstNode(head);
    else
        DeleteAtInside(head,position);

    //Function calling for printing linked list
    printf("After operation: ");
    PrintLinkedList(head);
    printf("\n");

    return 0;
}


