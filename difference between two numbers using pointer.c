#include<stdio.h>
int main(){
	int *pointer1,*pointer2,num1,num2,diff;
	printf("\n enter two numbers for find a difference:\n");
	scanf("%d %d",&num1,&num2);
	pointer1=&num1;
	pointer2=&num2;
	diff=*pointer1-*pointer2;
	printf("difference:%d",diff);
	return 0;
}
