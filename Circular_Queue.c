#include<stdio.h>
#include<stdlib.h>

struct cqueue
{
    int data[10];
    int rear,front;
};

struct cqueue p;

void enqueue();
void display();
void dequeue();

void main()
{
    int ch;
    p.rear=0;
    p.front=0;

    while(1)
    {
        printf("\nEnter the Choice: \n1.Enqueue \n2.Display \n3.Exit \n4.Dequeue: ");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:enqueue();
                break;
            case 2:display();
                break;
            case 3:exit(0);
                break;
            case 4:dequeue();
                break;


            default:printf("\nPls Select the Correct Choice: ");
        }
    }
}


void enqueue()
{
    int val;
    printf("\nEnter the Value to Insert: ");
    scanf("%d",&val);

    p.rear=(p.rear+1)%5;
    if(p.front==p.rear)
    {
        printf("\nQueue is Full");
        if(p.rear==0)
        {
            p.rear=5-1;

        }
        else
        {
            p.rear=p.rear-1;
        }
    }

    else
    {
        p.data[p.rear]=val;
    }
}


void display()
{
    int i;

    if(p.front==p.rear )
    {
        printf("\nEmpty");
    }

    else
    {
        i=p.front+1;
        while(1)
        {
            printf("\n%d ",p.data[i]);
            if(i==p.rear)
            {
                break;
            }
            i=(i+1)%5;
        }
    }
}

void dequeue()
{
    if(p.front==p.rear)
    {
        printf("\nEmpty");
    }

    else
    {
        p.front=(p.front+1)%5;
        printf("\n%d is Deleted: ",p.data[p.front]);
    }
}
