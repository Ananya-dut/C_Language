#include<stdio.h>
#include<string.h>
int sttop=-1;
char stack[100];
void push(char ele){
	if(sttop>=100)
	printf("stack is full");
	else{
		sttop++;
		stack[sttop]=ele;
	}
}
char pop(){
	char d;
	if(sttop<0)
	printf("stack is empty");
	else{
		d=stack[sttop];
		sttop--;
	}
	return d;
}
int main(){
	char str[100],ch;
	int len,i;
	printf("enter the string:");
	gets(str);
	len=strlen(str);
	for(i=0;i<len;i++){
		push(str[i]);
	}
	for(i=0;i<len;i++){
		ch=pop();
		printf("%c",ch);
	}
	return 0;
}
