#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *link;
};
void SearchInLinkedList(struct node *head,int data)
{
    int count = 0;
    struct node *temp;
    temp = head;
    while(temp != NULL)
    {
        count++;
        if(temp->data == data)
        {
            printf("Data is found in node %d.\n",count);
            break;
        }
        temp = temp->link;
    }
    if(temp == NULL)
        printf("Data is not found.\n");
}
int main()
{
    struct node *head;
    head = malloc(sizeof(struct node));
    head->data = 45;
    head->link = NULL;

    struct node *current;
    current = malloc(sizeof(struct node));
    current->data = 98;
    current->link = NULL;

    head->link = current;

    current = malloc(sizeof(struct node));
    current->data = 3;
    current->link = NULL;

    head->link->link = current;

    SearchInLinkedList(head,98);

    return 0;
}
