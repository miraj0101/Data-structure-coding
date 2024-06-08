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
void InsertAtEnd(struct node *head,int data,int position)
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
    position = CountingNodes(head);

    //Inserting node end of linked list
    InsertAtEnd(head,67,position+1);

    //Function calling for printing linked list
    PrintLinkedList(head);

    return 0;
}



