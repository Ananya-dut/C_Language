#include<stdio.h>
#include<string.h>
int main(){
	char s[30],B[50];
	printf("enter the string:");
	gets(s);
	printf("enter the string:");
	gets(B);
	strcat(B,s);
	puts(B);
}
