#include<stdio.h>

void main()
{
    int p,i,j;

    int a[9]={1,23,10,15,17,21,44,43,53};

    //printf("\nArray: ");
    printf("\nPrime No.: \n");
    for(i=0;i<9;i++)
    {
        //printf("\t%d",a[i]);
       p=0;
       for(j=2;j<a[i];j++)
       {
           if(a[i]%j==0)
           {
               p++;
           }
       }

       if(p==0 && a[i]!=1)
       {
           printf("\nPrime: %d at Index: %d\n",a[i],i);
       }

    }


}
