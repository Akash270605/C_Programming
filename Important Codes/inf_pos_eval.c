#include<stdio.h>
#include<string.h>

struct stack {                        //stack to push operands and the result of operations
    int data[10];
    int p;
}st;                          //stack variable

int st_pop();
int operator_solve(char a,char b,char d);
void st_push(int c);
void display();

int main()
{
    int i=0,j,k,l;  st.p=-1;
    char pos[100]="9689/*953/+-+";    //equation given in character array
    j=strlen(pos);
    while (i!=j)    //i will traverse from l->r 
    {
        if (pos[i]=='+' || pos[i]=='-' || pos[i]=='*' || pos[i]=='/' || pos[i]=='^')
        {
            
            st_push(operator_solve(st_pop(),st_pop(),pos[i]));      //2 operands are popped and the operator is performed on them
        }
        else
        {
            /*Error Part: Here there was an error issue due to typecasting the character directly 
            which resulted in the typecasted integer containing the ascii value of the character   Ex: '5' in ascii is '53'
            
            Fix: I have fixed this by subtracting the ascii value of '0' from pos[i] which will
            give a typecasted integer value that i need to push.*/
            l=pos[i] - '0';        
            st_push(l);
        }
    i++;
    }
    display();
    //printf("%s",eq);
    return 0;
}

void st_push(int c)
{
    st.data[++st.p]=c;
}

int st_pop()
{
    return st.data[st.p--];
}

int operator_solve(char a,char b,char d)
{
    int x,y,res;
    x=(int)a;
    y=(int)b;
    if (d=='+')
    {
        res=x+y;
    }
    else if (d=='-')
    {
        res=x-y;
    }
    else if (d=='*')
    {
        res=x*y;
    }
    else if (d=='/')
    {
        res=x/y;
    }
    else if (d=='^')
    {
        res=x^y;
    }
    printf("%d\n",res);
    return res;
}

void display()
{
    printf("%d",st.data[st.p]);
}

