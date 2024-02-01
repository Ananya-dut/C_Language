#include<stdio.h>
int reverse(int);
int main(){
	int n,x;
	printf("enter the number:");
	scanf("%d",&n);
	x=reverse(n);
	printf("%d",x);
}
int reverse(int n){
	int remainder;
	while(n>0){
		remainder=n%10;
		n=n/10;
	}
	return(remainder);
}
