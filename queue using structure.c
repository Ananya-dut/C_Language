#include<stdio.h>
#define size 10
struct queue{
	int arr[size],front,rear;
}q;

void insert(int);
int delet();
void display();
int main(){
	q.rear=-1;
	q.front=-1;
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
	if(q.rear==size-1)
	printf("full");
	else{
		q.rear++;
		q.arr[q.rear]=a;
		q.front=0;
	}
}
int delet(){
	int b;
	if((q.front==-1)||(q.front>q.rear))
printf("empty");
else{
	b=q.arr[q.front];
	q.front++;
}
return(b);	
}
void display(){
	int i;
	if((q.front==-1)||(q.front>q.rear))
	printf("empty");
	for(i=0;i<=q.rear;i++){
	printf("%d",q.arr[i]);
	printf("\n");
	}
}

