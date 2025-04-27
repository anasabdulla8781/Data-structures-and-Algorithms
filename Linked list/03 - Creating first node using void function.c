#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data ;
    struct node* next;
};
void insert_node(struct node* q , int data);


void insert_node(struct node* q , int data)
{
    q->data = data;
    q->next = NULL;
}

int main ()
{
    struct node *p = (struct node*)malloc(sizeof(struct node)); /// Now we have a proper memory allocated for P . so if we pass p , It will pass that address and we can modify the content there . no need to return anything , content will not vanish after the fucntion call.
    insert_node(p,25);
    printf("%d",p->data);
    return 0;
}