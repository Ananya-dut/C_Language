#include<stdio.h>
int factorial(int n);
int main(){
	int n,r,ans;
	printf("enter n:");
	scanf("%d",&n);
	printf("enter r:");
	scanf("%d",&r);
	ans=factorial(n)/(factorial(n-r)*factorial(r));
	printf("nCr=%d\n",ans);
	return 0;
}
int factorial(int n){
int fact=1;
int i;
for(i=1;i<=n;i++)
fact*=i;
return fact;}
