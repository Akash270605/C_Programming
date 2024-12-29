#include<stdio.h>
#include<stdlib.h>
#include<math.h>


struct stack
{
 char data[30];
 int p;
};
struct stnum
{
  float data[30];
  int p;
};

struct stack st,post;
struct stnum oand;

void postpush(char h);
void stpush(char x);
char stpop();
int pre(char ch);
void disp();
void post_eval();
void oandpush(float n);
float oandpop();


//precedence
int pre(char ch){

if(ch=='^'){
    return 3;
}
else if(ch=='*'||ch=='/'){
    return 2;
}

else if(ch=='+'||ch=='-'){
    return 1;
}

else{
    return 0;
}

}

//stack push
void stpush(char x){


st.data[++st.p]=x;
}


//stack pop
char stpop(){

return st.data[st.p--];
}


//postfix push
void postpush(char h){

post.data[++post.p]=h;
}

//Operand Push
void oandpush(float n)
{
   //printf("%f push \n ",n);
    oand.data[++oand.p]=n;
}

//Operand Pop
float oandpop()
{
return oand.data[oand.p--];
}


//display
void disp(){
    int j;

if(post.p==-1 && st.p==-1){
    printf("\nNo data");
}
else{
    printf("\nPostfix Expression is: ");
    for(j=0;j<=post.p;j++){
        printf("%c",post.data[j]);
        }
    printf("\n\n");
    }
}

/*//Postfix Expression in Another stack
void n_fun()
{
    int i;
    for(i=0;i<=post.p;i++)
    {
        stackpush(post.data[post.p]);
    }
}*/

// Postfix Evaluate Function
void post_eval()
{
  float n,n1,n2,evl;
  int i;
  char s;
  evl=0;

  //n_fun();

  for(i=0;i<=post.p;i++)
  {
      if(post.data[i]=='+'||post.data[i]=='-'||post.data[i]=='/'||post.data[i]=='*'||post.data[i]=='^')
        {
        s=post.data[i];
        n1=oandpop();
        n2=oandpop();
        switch(s)
        {
          case '-': evl=n2-n1;
          break;

          case '+':evl=n1+n2;
          break;

          case '*': evl=n1*n2;
          break;

          case '/':evl=n2/n1;
          break;

          case '^':evl=pow(n2,n1);
            break;

          default: printf("\n Enter Correct Symbol!!!!!!");
        }
          oandpush(evl);
       }
       else
       {
           n=(float)post.data[i]-'0';
            oandpush(n);

         }
  }
  printf("\nSolution is: %f\n",oand.data[oand.p]);
}



//Main
void main(){
char eq[50];
int i=0;

st.p=-1;
post.p=-1;
oand.p=-1;
//stack.p=-1;

printf("Enter the Expression: ");
scanf("%s",eq);

while(eq[i]!='\0'){
    if(eq[i]=='+'||eq[i]=='-'||eq[i]=='/'||eq[i]=='*'||eq[i]=='^'){
        if(pre(eq[i])>pre(st.data[st.p])){
            stpush(eq[i]);
        }
        else{           //if precedence of Current symbol<= Top Stack Symbol

            while(st.p!=-1){
              if(pre(eq[i])>pre(st.data[st.p]))
                break;
               //post.data[++post.p]=st.data[st.p--];

               postpush(stpop());

            }
            //st.data[++st.p]=eq[i];
            stpush(eq[i]);    //Push in Stack if Current Symbol> Top Stack symbol
        }

    }

    else if(eq[i]=='('){
             stpush(eq[i]);
                }

    else if(eq[i]==')'){
        while(st.data[st.p]!='('){
                postpush(stpop());

              }

              stpop(); //Pop the parenthesis '('
    }


    else{
        postpush(eq[i]);   //If Operand Push expression into Postfix Directly
    }
    i++;
}

while(st.p!=-1){
    postpush(stpop());  //If any Operand remained in Stack, push in Postfix
}
disp();
post_eval();
}
