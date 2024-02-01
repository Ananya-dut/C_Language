#include<stdio.h>
void insertion(int[],int);
int main(){
	int arr[5],n,i;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("\nenter the elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\nthe original array is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	insertion(arr,n);
}
void insertion(int arr[],int n){
	int i,j,t;
	for(i=1;i<n;i++){
		for(j=i;j>0 && arr[j-1]>arr[j];j--){
			t=arr[j];
			arr[j]=arr[j-1];
			arr[j-1]=t;
		}
	}
	printf("\nthe inserted array is:\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
}
