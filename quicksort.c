#include<stdio.h>
void quicksort(int[],int,int);
int main(){
	int arr[5],n,i,f,l;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("\nenter elements:\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\noriginal array:\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	quicksort(arr,0,n-1);
	printf("the quick sorted array is:");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
}
void quicksort(int arr[],int f,int l){
	int pivot,temp,i,j;
	if(f<l){
		pivot=f;
		i=f;
		j=l;
		while(i<j){
			while(arr[i]<=arr[pivot])
			i++;
			while(arr[j]>arr[pivot])
			j--;
			if(i<j){
				temp=arr[i];
				arr[i]=arr[j];
				arr[j]=temp;
			}
		}
		temp=arr[pivot];
		arr[pivot]=arr[j];
		arr[j]=temp;
		quicksort(arr,0,j-1);
		quicksort(arr,j+1,l);
	}
}
