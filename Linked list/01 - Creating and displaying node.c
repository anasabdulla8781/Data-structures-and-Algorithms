// Write a basic code for Linked list with first node and print the content in the node 

#include <stdio.h>
#include <stdlib.h>

struct node 
{
    int data;
    struct node *next;
};

int main ()
{
    struct node*p = NULL;
    p = (struct node*)malloc(sizeof(struct node));
    p->data = 10;
    p->next = NULL;


    printf("%d",p->data);
    return 0;
}