/*

1 - Add deque aslo in the above problem
2 - Add isempty and isfull functions properly 
3 - Add reset conditions in the queue

*/

#include "stdio.h"
#include "stdlib.h"

struct queue
{
    int front ;
    int rear ;
    int *p;
    int size;
};

void init_queue(struct queue *q)
{
    q->front = -1;
    q->rear = -1;
    q->size = 0;
}

int isfull (struct queue *q)
{
    return (q->rear >= q->size -1);
}

void enqueue (struct queue *q , int data)
{
    if (isfull(q))
    {
        printf("queue is full \n");
    }
    else 
    {
        if (q->front == -1)
        {
            q->front = 0;
        }
        q->rear++;
        q->p[q->rear] = data;
    }
}

int isempty (struct queue *q)
{
    return(q->rear == -1 || q->front >q->rear);
}

void display (struct queue *q)
{
    if(isempty(q))
    {
        printf("queue is empty\n");
    }
    else 
    {
        printf("The elements in the array are ");
        for (int x = q->front ; x<=q->rear ; x++)
        {
            printf("%d ",q->p[x]);
        }
        printf("\n");
    }
}

void dequeue(struct queue *q)
{
    if(isempty(q))
    {
        printf("there is no element to do dequeue\n");
    }
    else
    {
        int x = q->p[q->front];
        printf("removing the element %d\n",x);
        q->front++;
    }
    if(q->front > q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
}

int main ()
{
    struct queue q;
    init_queue(&q);
    printf("enter the size of queue\n");
    scanf("%d",&(q.size));
    if(q.size <= 0)
    {
        printf("size is not proper");
        return 0;
    }
    q.p = (int*)malloc(sizeof(int)*q.size);

    enqueue(&q, 5);
    enqueue(&q ,3);
    enqueue(&q ,6);
    display(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    dequeue(&q);
    enqueue(&q ,6);
    enqueue(&q ,5);
    enqueue(&q ,7);
    dequeue(&q);
    enqueue(&q ,8);         /// Problem with lenear queue (we cant insert this )
    enqueue(&q ,9);         /// Problem with lenear queue (we cant insert this )
    display(&q);
    free(q.p);
    return 0;
}


