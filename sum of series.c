#include<stdio.h>

float fun(float i)
{
  float sum=0,fact=1;	
	fact=fact*i;
	sum=sum+(fact/i);
	return sum;
}

float main(){
	float i,j;
	for(i=1;i<=5;i++)
	j=fun(float i);
	printf("sum=%f",j);
	return 0;
}
