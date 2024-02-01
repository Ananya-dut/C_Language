#include<stdio.h>
int main(){
	int ch;
	printf("enter a digit:");
	scanf("%d",&ch);
	if(ch>='0'&&ch<='9'){
		printf("it is a digit");
		}
	else{
		printf("it is not a digit");
		}
	return 0;
	}
