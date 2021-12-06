#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
}*head;

void createlist(int n)
{
    struct node *newnode, *temp;
    int data, i;
    head = (struct node *)malloc(sizeof(struct node));
    if(head==NULL)
        printf("Memory allocation failed.");
    else
    {
        printf("Enter the data of node 1: ");
        scanf("%d", &data);
        head->data=data;
        head->next=NULL;
        temp = head;
        for(i=2; i <= n; i++)
        {
            newnode = (struct node *)malloc(sizeof(struct node));
            if(newnode == NULL)
                printf("Memory allocation failed.");
            else
            {
                printf("Enter data of node %d = ", i);
                scanf("%d", &data);
                newnode->data = data;
                newnode->next = NULL;
                temp->next = newnode;
                temp=temp->next;
            }
        }
        printf("Singly Linked List has been created successfully.\n");
    }
}

void insertnodebeg(int data)
{
    struct node *newnode;
    newnode = (struct node *)malloc(sizeof(struct node));
    if(newnode == NULL)
        printf("Memory allocation failed.");
    else
    {
        newnode->data = data;
        newnode->next = head;
        head = newnode;
        printf("Data inserted successfully!\n");
    }
}

void displaylist()
{
    struct node *temp;
    if(head==NULL)
        printf("List is empty");
    else
    {
        int i = 1;
        temp = head;
        while(temp != NULL)
        {
            printf("Data %d = %d\n", i, temp->data);
            i++;
            temp = temp->next;
        }
    }
}

int main()
{
    int n, data;
    printf("Enter total number of nodes = ");
    scanf("%d", &n);
    createlist(n);
    printf("\nData present in the list:-\n");
    displaylist();
    printf("\nEnter data to insert at beginning of the list = ");
    scanf("%d", &data);
    insertnodebeg(data);
    printf("\nData present in the list after insertion at the beginning:-\n");
    displaylist();
    return 0;
}
