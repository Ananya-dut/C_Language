#include<stdio.h>
void selection(int[],int);
int main(){
	int i,arr[5],n,j,t;
	printf("enter the size of the array:");
	scanf("%d",&n);
	printf("\nenter the array element:\n");
	for(i=0;i<n;i++)
	scanf("%d",&arr[i]);
	printf("\noriginal array:\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	seletion(arr,n);
	
}
void seletion(int arr[],int n){
	int i,j,t,p;
	for(i=0;i<n-1;i++){
		p=i;
		for(j=i+1;j<n;j++){
			if(arr[j]<arr[p]){
				p=j;
			}
			if(p!=i){
			
			
				
				t=arr[p];
				arr[p]=arr[i];
				arr[i]=t;
			}
		}
	}
	printf("\nthe sorted array:\n");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
}
