#include<stdio.h>
#define size 10

int rear=-1,front=-1;
int q[size];

void enqueue(int value)
{
    if(rear==size-1)
    {
        printf("queue overflow!cannot insert");
    }
    else
    {
        if(front==-1)
        front=0;
        {
            rear++;
            q[rear]=value;
            printf("%d inserted into queue.\n",value);
        }
    }
    
}
int main()
{
    enqueue(23);
    enqueue(23);
    enqueue(23);
    enqueue(23);
    printf("\tQUEUE\n");
    for(int i=0;i<=rear;i++)
    {
        printf("%d\n",q[i]);
    }
    
}