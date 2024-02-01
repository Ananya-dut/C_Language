#include<stdio.h>
void binarysearch(int[],int);
int main(){
	int arr[5],n,i;
printf("enter the size of the array:");
scanf("%d",&n);
printf("\nenter the elements:\n");
for(i=0;i<n;i++)
scanf("%d",&arr[i]);
printf("\nthe asending order array is:\n");
for(i=0;i<n;i++)
printf("%d\t",arr[i]);
binarysearch(arr,n);
}
void binarysearch(int arr[],int n){
	int l,r,mid,v;
	l=0;
	r=n-1;
	mid=(l+r)/2;
	printf("searching value is:");
	scanf("%d",&v);
	while(l<=r){
		if(v>arr[mid])
		l=mid+1;
		else if(v==arr[mid]){
			printf("%d is found at position %d",arr[mid],mid);
			break;
		}
		else
		r=mid-1;
		mid=(l+r)/2;
	}
	if(l>r)
	printf("value not found");
}
