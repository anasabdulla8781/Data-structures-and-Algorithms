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
    int link;
    count = head;
    while(count)
    {
        link++;
        count = count ->next;
    }
    printf("\n list has %d links",link);
}

void insert_from_array(int *x , int num)
{
    int i = 0;
    while (i<num)
    {
        insert_node(x[i]);
        i++;
    }
}

int main ()
{
    int a[]= {6,8,25,14,36};
    insert_from_array(a,(sizeof(a)/sizeof(int)));

    display();

    count();
}