#include<stdio.h>

void linearsearch(int[],int);
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
	linearsearch(arr,n);
}
void linearsearch(int arr[5],int n){
	int i,j,t,k,v,found=0;
	for(i=0;i<n;i++){
		for(j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
			
			t=arr[j];
			arr[j]=arr[j+1];
			arr[j+1]=t;}
		}
	}
	printf("the sorted array is:");
	for(i=0;i<n;i++)
	printf("%d\t",arr[i]);
	printf("the searching value is:");
	scanf("%d",&v);
	for(k=0;k<n;k++){
		if(v==arr[k]){
		
			printf("%d is found at index %d",v,k);
			break;
	}
}
	if(v!=arr[k]){
		printf("value not found");
	}
	 
	
		


}
