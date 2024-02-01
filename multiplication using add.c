#include<stdio.h>
int average(int a,int b){
	int sum,avg;
	sum=a+b;
	avg=sum/2;
	return avg;
		
	}
	
	
int main(){
	int num1,num2,res=0;
	printf("enter the first num:");
	scanf("%d",&num1);
	printf("enter the second num:");
	scanf("%d",&num2);
	res=average(num1,num2);
	printf("%d",res);
	return 0;
}
