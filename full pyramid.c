#include<stdio.h>
int main(){
	int i,n,s,j;
	printf("enter the number of n:");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		for(s=i;s<=n;s++){
			printf(" ");
		}
		for(j=1;j<=(2*i-1);j++){
			printf("*");
		}
		printf("\n");
	}
	return 0;
}
