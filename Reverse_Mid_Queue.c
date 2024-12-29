//Code Not wORKINg

#include<stdio.h>
#include<stdlib.h>

struct queue
{
    int data[20],st[20];
    int front,rear,sp;
};

struct queue q,p;

void enqueue();
void dequeue();
void display();
void reverse();

void main()
{
    q.front=0;
    q.rear=-1;
    p.sp=-1;
    int ch;

    while(1)
    {
        printf("\nEnter the Choice: \n1.Enqueue \n2.Dequeue \n3.Display \n4.Reverse \n5.Exit");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1:enqueue();
                break;

            case 2:dequeue();
                break;

            case 3:display();
                break;

            case 4:reverse();
                break;

            case 5:exit(0);

            default:printf("\nEnter Correct Choice");
        }

    }
}

void enqueue()
{
    if(q.rear>=20)
    {
        printf("Queue is Full: \n");
    }
    else
    {
        int n;
        printf("\n Enter the Value: ");
        scanf("%d",&n);

        q.data[++q.rear]=n;
    }
}

void dequeue()
{
    if(q.front>q.rear)
    {
        printf("\nQueue is Empty \n");
    }

    else{
        ++q.front;
    }
}

void display()
{

    int j;
    int i;
    if(q.front>q.rear)
    {
        printf("\nQueue is Empty\n");
    }

    else
        {
       printf("\nEnter the Choice: \n1.Queue \n2.Reverse\n");
        scanf("%d",&j);

        if(j==1)
        {

            for(i=q.front;i<=q.rear;i++){
                printf("%d\n",q.data[i]);
            }
        }

        if(j==2)
        {
            for(i=p.sp;i>=0;i--)
            {
                printf("%d\n",p.st[i]);
            }
            for(i=q.front;i<=q.rear;i++)
            {
                printf("%d\n",q.data[i]);
            }
        }
    }
}


void reverse()
{
    int m,i;
    printf("\nEnter upto which Reverse: ");
    scanf("%d",&m);

    for(i=0;i<m;i++){
        p.st[++p.sp]=q.data[q.front++];
    }
}

