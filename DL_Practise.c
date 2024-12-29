#include<stdio.h>
#include<stdlib.h>

struct dl
{
    int data;
    struct dl *prev,*next;
};

struct dl *p;

void insert();
void display();
void d_any();
void del();
void d_f();
void d_l();
void rev();
void sort();

//Main Function
void main()
{
    int ch;
    p=NULL;

    while(1)
    {
     printf("\n1.Insert \n2.Display \n3.Exit \n4.Delete \n5.Reverse \n6.Sort \nEnter the Choice: ");
     scanf("%d",&ch);

     switch(ch)
     {
         case 1:insert();
            break;

        case 2:display();
            break;

        case 3: exit(0);
            break;

        case 4:del();
            break;

        case 5:rev();
            break;

        case 6:sort();
            break;

        default: printf("\nPls Choose Correct Choice: ");
     }
    }
}

//Insert Function
void insert()
{
    struct dl *k,*t;
    int val;

    printf("\nEnter the Value to Insert: ");
    scanf("%d",&val);

    k=(struct dl *)malloc(sizeof(struct dl));
    k->data=val;
    k->prev=NULL;
    k->next=NULL;

    if(p==NULL)
    {
        p=k;
    }

    else{
        t=p;
        while(t->next!=NULL)
        {
            t=t->next;
        }

     t->next=k; //Add Address of k in next(address) part of t
     k->prev=t; //Add Address of t in prev(address) part of k
    }
}

//Display Function
void display()
{
    struct dl *t;

    if(p==NULL)
    {
        printf("\nEmpty List");
    }

    else    //if List is not Empty
    {
        t=p;  //t=First Node
        while(t->next!=NULL)
        {
            printf("\n%d",t->data);
            t=t->next;
        }
        printf("\n%d\n",t->data);   //Print the Data of Last Node
    }
}

//Delete Function
void del()
{
    int ch;
    printf("\nEnter the Choice: \n1.First \n2.Last \n3.Any ");
    scanf("%d",&ch);

    switch(ch)
    {
        case 1:d_f();
            break;
        case 2:d_l();
            break;
        case 3:d_any();
            break;

        default:printf("\nPls Enter the Correct Choice!!!!" );

    }
}

//Delete First Function
void d_f()
{
    struct dl *t;

    t=p;
    p=p->next;
    t->next=NULL;
    p->prev=t->prev;  //Add NULL in prev part of p
    free(t);
}

//Delete Last Function
void d_l()
{
    struct dl *t1,*t2;

    t1=p;
    while(t1->next!=NULL)
    {
        t1=t1->next;
        t2=t1->prev;
    }
    t2->next=t1->next;  //Add NULL to next paert of t2
    t1->prev=NULL;
    free(t1);

}

//Delete in Between Function
void d_any()
{
    struct dl *t1,*t2,*t3;
    int n;

    printf("\nEnter the Value to Delete: ");
    scanf("%d",&n);

    t1=p;


    while(t1->next!=NULL)
    {

        t1=t1->next;
        t2=t1->prev;
        t3=t1->next;

        if(t1->data==n)
        {
            t2->next=t1->next;
            t3->prev=t1->prev;

            t1->next=NULL;
            t1->prev=NULL;
            free(t1);
        }

        else
        {
            if(t1->next==NULL)
            {
                printf("\nNo Such Data Present!!!!!\n");
            }

        }
    }

}


//Reverse Function
void rev()
{
    struct dl *t1,*t2;

    t1=p;
    while(t1->next!=NULL) //Loop to Store the Data First to Last
    {
        t1=t1->next;

    }

    t2=t1;
    while(t2->prev!=NULL)   //Loop to Reverse the Data From Last to First
    {
        printf("\n%d",t2->data);
        t2=t2->prev;
    }
    printf("\n%d\n",t2->data);  //Print the Data of Node Left(First Node)

}

//Sorting Function
void sort()
{
    struct dl *min,*t1,*s,*t2;

t1=p;

while(t1->next!=NULL) //This Loop for Increasing the Data of t1
{
    min=t1;
    t2=t1->next;
    while(t2!=NULL) //This Loop for Checking the min data until End(NULL)
    {
        if(t2->data<min->data)
        {
            min=t2; //Stores min data every time if Condition True

        }

        t2=t2->next;
    }

    //Swap the Data of min and t1
    s=t1->data;
    t1->data=min->data;
    min->data=s;

   t1=t1->next;
}

}
