#include<stdio.h>

void sum(int,float);

void main()
{
	int x;
	float y;
	printf("enter x and y:");
	scanf("%d,%f",&x,&y);
	sum(x,y);
}

void sum(int a,float b)
{
	printf("sum=%f",a+b);
}
