// CREATE THE FIRST NODE WITH THE HELP OF A FUCNTION

#include "stdio.h"
#include <stdlib.h>

struct node 
{
    int data;
    struct node* next;
};
struct node* insert_node(int data , struct node* q);

struct node* insert_node(int data , struct node* q)
{
    q = (struct node*)malloc(sizeof(struct node));
    q->data = data;
    q->next = NULL;
    return q;
}

int main ()
{
    struct node* p = NULL;
    p = insert_node(10,p);
    printf("%d",p->data);
    return 0;
}