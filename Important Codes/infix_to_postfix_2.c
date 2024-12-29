#include<stdio.h>
#include<stdlib.h>

struct infix{
    char data[20];
    int p;
};

struct infix oand,oter;int i,p1,p2;

void ppush(char ch,int last,int current);
void display();
int prece(char a);


void main()
{
    char eq[20];
    oand.p=-1;oter.p=-1;
    int i,r;

    printf("enter you equation :");
    scanf("%s",eq);

    i=0;
    while(eq[i]!='\0')       //loop until the equation end
    {
        
        if(eq[i]=='+' || eq[i]=='-' || eq[i]=='*' || eq[i]=='/' )
        {
        p1=prece(eq[i]);         //calling the precedence function to check priority
        p2=prece(eq[i-2]);

    
        ppush(eq[i],p1,p2);         //calling the push function
        }    
        else{
            ppush(eq[i],1,0);
        }
            
      i++;

    }
    
    // calling the display function 
    display();

}



// push function (curernt for recent operator && last is for previous entered operator)

void ppush(char ch,int current,int last)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/')    
    {
            if(current >= last)
            {   
                oter.data[++oter.p]=ch;
            }
            else{ 
                    while(oter.p!=-1)
                    {
                        oand.data[++oand.p]=oter.data[oter.p--];
                    }
                    oter.data[++oter.p]=ch;
                }
    }

    else{
            oand.data[++oand.p]=ch; 
    }
}




void display()
{
    int j;
    if(oand.p==-1 && oter.p==-1)
    {
        printf("no data : ");
    }
    else{
        for(j=0;j<=oand.p;j++)
        {
            printf("%c",oand.data[j]);
        }
        for(j=oter.p;j>=0;j--)
        {
            printf("%c",oter.data[j]);
        }
    }
}


int prece(char a)
{
    if(a=='/')
    {
        return 4;
    }

    if(a=='*')
    {
        return 3;
    }

    if(a=='+'||a=='-')
    {
        return 2;
    }

    else
    {
        return 1;
    }
}


/*void ppush(char ch)
{
    if(ch == '+' || ch == '-' || ch == '*' || ch == '/')
    {
        oter.data[++oter.p]=ch;
    }
    else{
        oand.data[++oand.p]=ch;
    }
}*/