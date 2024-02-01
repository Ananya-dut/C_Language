#include<stdio.h>
void palindrome(int);
void main(){
	int n;
	printf("enter a number:");
	scanf("%d",&n);
	palindrome(n);
}
void palindrome(int n)
{
int m,r,s=0;
m=n;
while(n>0)
{
	r=n%10;
	s=r+(s*10);
	n=n/10;
}
if(m==s)
printf("palindrome number");
else
printf("not palindrome number");
}
