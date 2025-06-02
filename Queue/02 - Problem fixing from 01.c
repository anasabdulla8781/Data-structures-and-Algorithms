/* Problem - This has 3 problems 

1 - if we qive size as 0 , it will create array with size 0 and we will try to enter the element there - segmentation fault. 
2 - queue is not initialized to empty.

*/

#include "stdio.h"
#include "stdlib.h"

struct queue 
{
    int front ;
    int rear ;
    int size;
    int *p;
};

void init_queue(struct queue *q)
{
    q->front = -1;
    q->rear = -1;
    q->size = 0;
}

int isfull(struct queue* q)
{
    return ((q->rear == (q->size)-1));
}

void enqueue (struct queue *q , int data)
{
    if(isfull(q))
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
    init_queue(&q);
    printf("Enter the size of queue\n");
    scanf("%d",&(q.size));
    if (q.size <= 0 )
    {
        printf ("We cant create array with this size\n");
        return 0;
    }
    q.p = (int*)malloc(q.size * (sizeof(int)));
    enqueue(&q , 15);
    enqueue(&q , 7);
    enqueue(&q , 9);
    display(&q);
    free(q.p);
    return 0;
}