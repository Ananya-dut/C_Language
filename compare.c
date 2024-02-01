#include<stdio.h>
#include<string.h>
int main(){
	int x;
	char s1[20],s2[30];
	printf("enter 1st string:");
	gets(s1);
	printf("enter 2nd string:");
	gets(s2);
	x=strcmp(s1,s2);
	if(x==0)
	printf("match");
	else
	printf("%d",x);
}
