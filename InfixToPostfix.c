
#include<stdio.h>
#include<stdlib.h>


struct stack{
 char data[30];
 int p;
};

struct stack st,post;

void postpush(char h);
void stpush(char x);
char stpop();
int pre(char ch);
void disp();


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

//Main
void main(){
char eq[50];
int i=0;

st.p=-1;
post.p=-1;

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
}



