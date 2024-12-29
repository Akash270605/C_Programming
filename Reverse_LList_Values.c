#include<stdio.h>
#include<stdlib.h>

struct llink {
int data;
struct llink *add;
};

struct llink *p;
int c=0,n;

void _insert();
void _display();
void _reverse();
void main(){

int ch;
p=NULL;

while(1){
    printf(" \nEnter your Choice: \n1.Insert \n2.Dispaly \n3.Reverse \n4.Exit ");
   scanf("%d",&ch);

   switch(ch){

   case 1:_insert();
        break;
    case 2:_display();
        break;
    case 3:_reverse();
        break;
    case 4:exit(0);

    default:printf("\nInvalid No. ");
   }
}
}

void _insert(){
int val;
struct llink *k,*temp;
printf("\nEnter the Value\n");
scanf(" %d",&val);

k=(struct llink *)malloc(sizeof(struct llink));
k->data=val;
k->add=NULL;

if(p==NULL){
    p=k;
}
else{
    temp=p;
    c++;
    while(temp->add!=NULL){
        temp=temp->add;
    }
    temp->add=k;}

}

void _display(){
struct llink *temp;
if(p==NULL){
    printf("\nEmpty List ");

}
else{
    temp=p;
    while(temp->add!=NULL){
        printf("\n%d ",temp->data);
        temp=temp->add;
    }
    printf("\n%d ",temp->data);
}
}

void _reverse(){
    struct llink *t1,*t2;
    int i,m,j,t3;

 if(p==NULL){
    printf("\nEmpty List");
 }

 else{


    t2=p;
    m=c/2;
    j=c;
    n=0;
    while(n<=m){
        t1=p;

        for(i=0;i<j;i++){
            t1=t1->add;
        }
        t3=t1->data;
        t1->data=t2->data;
        t2->data=t3;

        t2=t2->add;
        n++;
        j--;
    }
 }
}
