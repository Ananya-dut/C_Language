#include<stdio.h>
#define size 10
int arr[size],rear=-1,front=-1;
void insert(int);
int delet();
void display();
int main(){
	int rear=front=-1;
	int s,a,b,c=1;
	while(c==1)
	{printf("\n1.insert\n2.delet\n3.display");
	printf("\nenter your choice\n");
	scanf("%d",&s);
	switch(s)
	{case 1: printf("insert the element:");
	         scanf("%d",&a);
	         insert(a);
	         break;
	case 2: b=delet();
	        printf("\ndelet element=%d",b);
	        break;
	case 3: display();
	default:
	       printf("invalid input");
	}
	printf("\nwant to continue\n");
	fflush(stdin);
	scanf("%d",&c);
	}
return 0;
}
	
void insert(int a){
	if(rear==size-1)
	printf("full");
	else{
		rear++;
		arr[rear]=a;
		front=0;
	}
}
int delet(){
	int b;
	if((front==-1)||(front>rear))
printf("empty");
else{
	b=arr[front];
	front++;
}
return(b);	
}
void display(){
	int i;
	if((front==-1)||(front>rear))
	printf("empty");
	for(i=0;i<=rear;i++){
	printf("%d",arr[i]);
	printf("\n");
	}
}


