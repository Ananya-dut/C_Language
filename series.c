#include<stdio.h>
int series(int);
int main(){
	int n,s;
	printf("enter value:");
	scanf("%d",&n);
	s=series(n);
	printf("s=%d",s);
}
int series(int n){
	int i,x;
	for(i=1;i<=n;i++)
	x=i/(i+1);
return(x);}

