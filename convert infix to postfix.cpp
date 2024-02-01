#include<stdio.h>
#include<stdlib.h>
#include<ctype.h>
#include<string.h>
int top=-1;
 char stack[100];
 void push(char item)
 {
 	if(top>=6)
 	printf("\n stack is full");
 	else{
 		top++;
 		stack[top]=item;
	 }
 }

 char  pop()
 {
 	char  ch=' ';
 	if(top<0)
 	printf("stack is empty");
 	else
 	{
 		ch=stack[top];
 		top--;
	 }
	 return ch;
 } 
 int is_optr(char sym)
 {
     if(sym=='n'||sym=='+'||sym=='-'||sym=='*'||sym=='/')
        return 1;
     else
	 return 0;
 }
 int prece(char sym)
 {
     if(sym=='^')
        return 3;
     else if(sym=='*'||sym=='/')
        return 2;
     else if(sym=='+'||sym=='-')
        return 1;
     else 
        return 0;
 }
 void infixtopostfix(char in_exp[],char post_exp[])
{
    int i,j;
    char item,x;
    push('(');
    strcat(in_exp,")");
    i=0,j=0;
    item=in_exp[i];
    while(item!='\0')
    {
        if(item=='(')
        {
            push(item);
        }
        else if (isdigit(item)||isalpha(item))
        {
            post_exp[j]=item;
            j++;
        }
        else if(is_optr(item)==1)
        {
            x=pop();
            while(is_optr(x)==1&&prece(x)>=prece(item))
            {
                post_exp[j] = x;
                j++;
                x=pop();
            }
            push(x);
            push(item);
        }
        else if(item==')')
        {
           x=pop();
           while(x!='(')
           {
              post_exp[j]=x;
              j++;
              x=pop();
           }
        }
        else
        {
            printf("\n individual expression");
            exit (1);
        }
        i++;
        item=in_exp[i];
    }
    if(top>0)
    {
        printf("\n invalid expression\n");
        exit (1);
    }
    post_exp[j]='\0';
}
int main()
{
    char infix[100],postfix[100];
    printf("\n enter the infix expression");
    gets(infix);
    infixtopostfix(infix,postfix);
    printf("\n postfix expreesion is %s",postfix);
    return 0;
}
