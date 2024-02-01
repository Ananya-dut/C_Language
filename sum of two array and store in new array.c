#include<stdio.h>
void main(){
	int i, arr1[5],arr2[5],sumArr[5];
	printf("enter the first array elements:");
	for(i=0;i<5;i++)
	scanf("%d",&arr1[i]);
	printf("enter the second array elements:");
	for(i=0;i<5;i++)
	scanf("%d",&arr2[i]);
	for(i=0;i<5;i++)
	{sumArr[i]=arr1[i]+arr2[i];
	printf("sum array element at index %d is=%d\n",i,sumArr[i]);
}
}
