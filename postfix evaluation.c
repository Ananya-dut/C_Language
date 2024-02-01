#include<stdio.h>
#include<stdlib.h>
#include<string.h>
char stack[100];
int top=-1;
void push(int sym)
{
	if(top>=100)
	printf("\n stack is full");
	else
	{
		top++;
		stack[top]=sym;
	}
}
int pop()
{
	int ch=0;
	if(top<0)
	printf("stack is empty");
	else
	{
		ch=stack[top];
		top++;
	}
}
int is_optr(char sym)
{
	if(sym=='^'||sym=='+'||sym=='-'||sym=='*'||sym=='/')
	return(1);
	else
	return(0);
}
int main(){
	char str[100];
	int i,a,b,r=0;
	char='4';
	printf("enter the expression\n");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(is_optr(str[i])==0)
		push(str[i]-48);
		else
		if(is_optr(str[i])==0)
		push(str[i]==1)
		{
			a=pop();
			b=pop();
			if(str[i]=='+')
			{
				r=b+a;
			}
			else
			if(str[i]=='-')
			{
				r=b-a;
			}
			else
			if(str[i]=='*')
			{
				r=b*a;
			}
			else
			if(str[i]=='/')
			{
				r=b/a;
			}
			push(r);
		}
	}
	printf("%d",pop());
	return 0;
}
