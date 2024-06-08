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

    printf("Primary linked list: ");
    PrintLinkedList(head);

    //Function calling for deleting first node
    head = DeleteFirstNode(head);

    printf("\nAfter operation: ");
    //Function calling for printing linked list
    PrintLinkedList(head);

    return 0;
}

