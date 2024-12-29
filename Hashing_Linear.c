#include<stdio.h>

void main()
{
    int hash[50],x,i,key,e,rem=0;

    for(i=0;i<50;i++)
    {
        hash[i]=NULL;  //To make Array Values NULL
    }


printf("\nNo. of Elements: ");  //Length of Elements
scanf("%d",&e);

printf("Enter the Mod Value: ");
scanf("%d",&x);

for(i=0;i<e;i++)
{
    printf("\nEnter the Element: ");  //Enter the Key Value At Run Time
    scanf("%d",&key);

    rem=key%x;     //Remainder

    if(hash[rem]==NULL)
    {
        hash[rem]=key;  //If Array(Hash Table) Index is Empty, add Element
    }

   else          //if Hash Table(index) is not Empty
    {
        while(hash[rem]!=NULL){
        rem++;          //Run Loop Until index in Not Empty
       }
       hash[rem]=key;   //Add Element when index is NULL
    }
}

printf("\nHash Table: ");
for(i=0;i<x;i++)
{
    printf("\n%d",hash[i]);   //Print Hash Table
}
}
