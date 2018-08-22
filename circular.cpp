#include<stdio.h>
#include<stdlib.h>
#include<iostream>
using namespace std;

/* structure for a node */
struct Node
{
    int data;
    struct Node *next;
};
 
/* Function to insert a node at the begining of a Circular
   linked list */
void push(struct Node **head_ref, int data)
{
    struct Node *ptr1 = (struct Node *)malloc(sizeof(struct Node));
    struct Node *temp = *head_ref;
    ptr1->data = data;
    ptr1->next = *head_ref;
 
    /* If linked list is not NULL then set the next of last node */
    if (*head_ref != NULL)
    {
        while (temp->next != *head_ref)
            temp = temp->next;
        temp->next = ptr1;
    }
    else
        ptr1->next = ptr1; /*For the first node */
 
    *head_ref = ptr1;
}
 
/* Function to print nodes in a given Circular linked list */
void printList(struct Node *head)
{
    struct Node *temp = head;
    cout<<&head<<"\n";
    //cout<<&head<<"\n";
    //cout<<&temp<<"\n";
    //Node** add = &head;
    if (temp != NULL)
    {
        do
        {
            printf("%d ", temp->data);
            cout<<&temp<<"\n";
            temp = temp->next;
        }
        while (temp != head);
    }
}
 
/* Driver program to test above functions */
int main()
{
    /* Initialize lists as empty */
    struct Node *head = NULL;
 
    /* Created linked list will be 11->2->56->12 */
    push(&head, 12);
    push(&head, 56);
    push(&head, 2);
    push(&head, 11);
    push(&head, 19);
 
    printf("Contents of Circular Linked List\n ");
    printList(head);
    cout<<"\n"; 
    return 0;
}