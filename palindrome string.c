#include<stdio.h>
#include<string.h>
int main(){
	s1[20],s2[30],x;
	printf("enter a string:");
	gets(s1);
	strcpy(s2,s1);
	strrev(s1);
	x=(s1,s2);
	if(x==0)
	printf("palindrome");
	else
	printf("not palindrome");
}
