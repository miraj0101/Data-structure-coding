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
void InsertAtInside(struct node *head,int data,int position)
{
    struct node *ptr;
    ptr = head;

    struct node *ptr2;
    //Allocating memory for new node which will be inserted
    ptr2 = malloc(sizeof(struct node));
    ptr2->data = data;
    ptr2->link = NULL;

    position--;
    while(position != 1)
    {
        ptr = ptr->link;
        position--;
    }
    //Linking fourth node with third node
    ptr2->link = ptr->link;
    //Linking third node with second node
    ptr->link = ptr2;
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
    struct node *head;
    //Allocating memory for first node
    head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current;
    //Allocating memory for second node
    current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;
    //Linking second node with first node
    head->link = current;

    //Allocating memory for third node
    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;
    //Linking third node with second node
    head->link->link = current;

    int position;
    printf("Enter position of insertion in linked list: ");
    scanf("%d",&position);

    int data;
    printf("Enter data which will be inserted in linked list: ");
    scanf("%d",&data);

    //Primary linked list
    printf("Primary linked list: ");
    PrintLinkedList(head);
    printf("\n");

    if(position == 1)
        head = InsertAtBeginning(head,data);
    else
        InsertAtInside(head,data,position);

    //Function calling for printing linked list
    printf("After operation: ");
    PrintLinkedList(head);
    printf("\n");

    return 0;
}
