#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next ;
};

struct node *head = NULL;
struct node *tail = NULL;

void insert_node(int data)
{
    struct node * temp = (struct node *)malloc(sizeof(struct node));
    temp->data = data;
    temp->next = NULL;

    if (!head)
    {
        head = temp;
        tail = head;
    }
    else
    {
        tail->next= temp;
        tail = tail->next;
    }
}

void display_node(void)
{
    if(!head)
    {
        printf("there is no lists");
    }
    else
    {
        struct node *temp = head;
        while(temp)
        {
            printf(" %d",temp->data);
            temp = temp->next;
        }
    }
}

void sum_of_nodes(void)
{
    struct node* temp = head;
    int sum = 0;

    while (temp)
    {
        sum = sum + temp->data;
        temp = temp->next;
    }
    printf ("\nthe sum of nodes are %d",sum);
}

int main ()
{

    insert_node(10);
    insert_node(26);
    insert_node(4);
    insert_node(36);
    display_node();
    sum_of_nodes();
    return 0;
}