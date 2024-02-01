#include<stdio.h>
int sttop=-1;
char stack[100];
void push(char ele)
{
	if(sttop>=100)
	printf("stack is full");
	else{
		sttop++;
		stack[sttop]=ele;
	}
}
char pop(){
	char ch=' ';
	if(sttop<0)
	printf("stack is empty");
	else
	{
		ch=stack[sttop];
		sttop--;
	}
	return ch;
}
int main(){
	char str[100];
	int i;
	printf("enter the string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if(str[i]=='(')
		{
		push(str[i]);
		}
		else if(str[i]==')')
		{
			if(sttop==-1)
			{
			return 0;
			}
			pop();
		}
	}
	if(sttop>=0)
	{
		printf("Mismatch");
	}
	else
	{
		printf("Match");
	}
	return 0;
}
