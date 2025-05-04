/// MAKE THE ABOVE PROGAM IN 0(1) form and add disply function also

#include <stdio.h>
#include <stdlib.h>


struct node
{
    int data;
    struct node* next;
};

void display(void);
void insert_node(int x);

struct node* head = NULL;
struct node* tail = NULL;

void insert_node(int x)
{
    // NODE creation
    struct node* new = (struct node*)malloc(sizeof(struct node));
    new->data = x;
    new->next = NULL;

    /// Linking the node 
    if(!tail)
    {
        head = new;
        tail = head;
    }
    else
    {
        tail->next = new;
        tail = tail->next;
    }
}

void display(void)
{
    struct node* temp = head;
    while(temp)
    {
        printf("%d ",temp->data);
        temp = temp->next;
    }
}

int main ()
{
    insert_node(25);
    insert_node(36);
    display();

    return 0;
}