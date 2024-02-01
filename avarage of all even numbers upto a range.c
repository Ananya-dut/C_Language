#include<stdio.h>
int main(){
	int i,n,count=0,avarage=1,p;
	printf("print even number till:");
	scanf("%d",&n);
	printf("all even numbers from 0 to %d are:\n",n);
	for(i=0;i<=n;i+=2){
		count=count+i;
		printf("%d\n",count);
	}
p=n/2;
avarage=count/p;
printf("avarage 0f all even numbers from 0 to %d is:%d",avarage);
return 0;	
}
