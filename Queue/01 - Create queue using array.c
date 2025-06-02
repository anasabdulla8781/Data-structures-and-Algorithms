/* Problem - Create queue using array  */

#include "stdio.h"
#include "stdlib.h"

struct queue 
{
    int front ;
    int rear ;
    int size;
    int *p;
};

void enqueue (struct queue *q , int data)
{
    if((q->rear == (q->size)-1))
    {
        printf("Queue is already full . we cant add new elements\n");
    }
    else 
    {
        if (q->front == -1)
        {
            q->front++;
        }
        q->rear++;
        q->p[q->rear] = data;
    }
}

void display (struct queue *q)
{
    if (q->rear == -1)
    {
        printf("queue is empty\n");
    }
    else 
    {
        printf("The elements are  ");
        for (int x = q->front ; x<= q->rear ; x++)
        {
            printf("%d  ",q->p[x]);
        }
        printf("\n");
    }
}

int main ()
{
    struct queue q;
    q.front = -1;
    q.rear = -1;
    printf("Enter the size of queue\n");
    scanf("%d",&(q.size));
    q.p = (int*)malloc(q.size * (sizeof(int)));
    enqueue(&q , 15);
    enqueue(&q , 7);
    enqueue(&q , 9);
    display(&q);
    free(q.p);
    return 0;
}