#include <stdio.h>
#include <stdlib.h>

struct node
{
    int data;
    struct node* next;
};

void display(void);
void insert_node(int data);

struct node * head= NULL;
struct node* tail = NULL;

void insert_node(int data)
{

    /// create a node 
    struct node* new = (struct node*) malloc (sizeof(struct node));
    new->data = data;
    new->next = NULL;

    if (!tail)
    {
        head = new;
        tail = head;
    }
    else
    {
        while(tail->next)
        {
            tail = tail->next;
        }
        tail->next = new;
    }
}

void display(void)
{
    struct node* disp= NULL;
    disp = head;
    while(disp)
    {
        printf ("%d ", disp->data);
        disp = disp->next;
    }
}

void count(void)
{
    struct node *count = NULL;
    int link = 0;
    count = head;
    while(count)
    {
        link++;
        count = count ->next;
    }
    printf("\n list has %d links",link);
}

void insert_node_location (int data , int location)
{
    struct node *new = (struct node*)malloc(sizeof(struct node));
    new->data = data;
    new->next = NULL;

    struct node*temp = head;
    int i = 1;

    if (location == 1)
    {
        new->next = temp;
        head = new;
    }
    else
    {
        while (temp && ((i+1)<location))
        {
            temp = temp->next;
            i++;
        }
    
        new->next = temp->next;
        temp->next = new;
    }

}

int main ()
{
    insert_node(14);
    insert_node(25);
    insert_node(3);
    insert_node_location(68,1);
    insert_node_location(36,2);
    insert_node_location(29,3);
    insert_node_location(45,1);

    display();

    count();
}