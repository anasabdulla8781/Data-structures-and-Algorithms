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

void max_element_in_list(void)
{
    struct node *temp = head;
    int max = -32768;               /// DONT GIVE 0 Here . give the minimum number of integer element possible

    while (temp)
    {
        if (max < (temp->data))
        {
            max = temp->data;
        }
        temp = temp->next;
    }
    if(head)
    {
        printf("\nThe max element is %d",max);
    }
    else
    {
        printf("\nThere is no elements in the list");
    }
    
}

void search_node_linear(int data)
{
    struct node *temp = head;
    int count = 1;
    if(!head)
    {
        printf("\nThere is no list itself");
    }
    else
    {
        while (temp)
        {
            if(data == temp->data)
            {
                printf("\nThe element is available in %dth position in list",count);
                break;
            }
            else
            {
                temp = temp->next;
                count++;
            }
        }
        if(!temp)
        {
            printf ("\nThere is no node with the element we searched");
        }
        
    }
}


int main ()
{

    insert_node(10);
    insert_node(26);
    insert_node(4);
    insert_node(36);
    insert_node(7);
    display_node();
    sum_of_nodes();
    max_element_in_list();
    search_node_linear(6);



    return 0;
}