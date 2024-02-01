#include<stdio.h>
int gcd(int n,int m);
int main()
{
	int m,n,g,lcm;
	printf("enter numbers:");
	scanf("%d%d",&m,&n);
	g=gcd(m,n);
	lcm=(m*n)/gcd(m,n);
	printf("LCM=%d",lcm);
}

int gcd(int n,int m)
{
	if(n>=m && n%m==0)
	{
		return m;
	}
	else
	{
		return gcd(m,n%m);
	}
}
