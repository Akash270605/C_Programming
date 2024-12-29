#include<stdio.h>
#include<stdlib.h>

struct dl
{
    int data;
    struct dl *p_add,*n_add;
};

struct dl *p;

void insert();
void display();
void d_any();

//Main Function
void main()
{
    int ch;
    p=NULL;

    while(1)
    {
        printf("\nEnter the Choice: \n1.Insert \n2.Display \n3.Delete \n4.Exit :");
        scanf("%d",&ch);

        switch(ch)
        {
            case 1: insert();
                break;

            case 2: display();
                break;

            case 3: d_any();
                break;

            case 4: exit(0);

            default: printf("\nPls Enter the Correct Choice: ");
        }
    }
}


//Insert Function
void insert()
{
    struct dl *k,*pre,*next;
    int val;

    printf("\nEnter the Value to Insert: ");
    scanf("%d",&val);

    k=(struct dl *)malloc(sizeof(struct dl));
    k->data=val;
    k->n_add=NULL;
    k->p_add=NULL;

    if(p==NULL)
    {
        p=k;
    }

    else
    {
        next=p;
        while(next->n_add!=NULL)
        {
            pre=next;
            next=next->n_add;
        }
        next->n_add=k;
        next->p_add=pre;
    }
}


//Display Function
void display()
{
    struct dl *temp;

    if(p==NULL)
    {
        printf("\nEmpty List: ");
    }

    else
    {
        temp=p;
        while(temp->n_add!=NULL)
        {
            printf("\n%d",temp->data);
            temp=temp->n_add;
        }
        printf("\n%d\n",temp->data);
    }
}


//Delete function
void d_any()
{
   struct dl *cur,*pre,*t;
   int i;

   printf("\nEnter the Value to Delete: ");
   scanf("%d",&i);

   cur=p;
   while(cur->n_add!=NULL)
   {
       pre=cur;
       cur=cur->n_add;


       if(cur->data==i)
       {
           t=cur->n_add;
           pre->n_add=t;
           cur->n_add=NULL;

       }


   }
   if(cur->data!=i){
        printf("\nData is not Present");
       }
free(cur);
}

