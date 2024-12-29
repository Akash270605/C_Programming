#include<stdio.h>
#include<stdlib.h>


struct list
{
    int data;
    struct list *add;

};

struct list *p[50];

//Insert Function
void insert(int key,int x)
{
  struct list *k,*temp;
  int rem;


    k=(struct list *)malloc(sizeof(struct list));
    k->data=key;
    k->add=NULL;
    rem=key%x;

    if(p[rem]==NULL)
    {
        p[rem]=k;
    }
    else
    {
        temp=p[rem];
        while(temp->add != NULL)
        {
            temp=temp->add;
        }
        temp->add=k;
    }

}


//Display Function
void display(int x)
{

    struct list *temp;
    int j;

    for(j=0;j<x;j++)
    {


     if(p[j]==NULL)
     {
        printf("\n0");
     }
     else
     {
       temp=p[j];
       while(temp->add != NULL)
       {
           printf("%d\t",temp->data);
           temp=temp->add;
       }
       printf("%d\t\n",temp->data);
     }
       printf("\n");
    }
}

//Hash Function
void hash()
{
  int key,i,n,x;
  for(i=0;i<30;i++)
  {
     p[i]=NULL;
  }

  printf("\nEnter the Length/No. of Values :");
  scanf("%d",&n);

  printf("\nEnter the Mod Value: ");
  scanf("%d",&x);

 for(i=0;i<n;i++)
 {
  printf("\nEnter the Value : ");
  scanf("%d",&key);
  insert(key,x);
}

 display(x);
}

//Main Function
void main()
{
   hash();
}
