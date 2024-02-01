#include<stdio.h>

void bubble(int[],int);
int main(){
	int arr[5],i,n;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("\nenter elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\noriginal array:\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	bubble(arr,n);
	
}
void bubble(int arr[],int n){
	int i,j,t;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
			
			t=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=t;}
		}
	}
	printf("the bubble sorted array is:");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	
}
