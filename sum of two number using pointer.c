#include<stdio.h>
int main(){
	int *pointer1,*pointer2;
	int num;
	printf("\n enter two numbers:");
	scanf("%d %d",pointer1,pointer2);
	num=*pointer1+*pointer2;
	printf("sum=%d",num);
	return 0;
}
