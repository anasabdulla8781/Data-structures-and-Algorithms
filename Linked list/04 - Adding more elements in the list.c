#include "stdio.h"
#include <stdlib.h>

struct node 
{
    int data;
    struct node* next ;
};
struct node* head = NULL;
void insert_node (int data);

void insert_node (int data)
{
    struct node* new = (struct node*)malloc(sizeof(struct node));
    struct node* temp = head;
    new->data = data;
    new->next = NULL;

    if(head == NULL)
    {
        head = new;
    }
    else
    {
        while(temp->next)
        {
            temp = temp->next;
        }
        temp->next = new;

    }
}

int main ()
{
    insert_node(26);
    insert_node(21);
    insert_node(6);
    insert_node(15);

    struct node* disp = NULL;
    disp = head;

    while(disp)
    {
        printf("%d ", disp->data);
        disp = disp->next;
    }

    return 0;
}