#include<stdio.h>
struct stack
{int arr[16],top;
}st;

void push(int);
int pop();
void display();
void main(){
	int s,a,b,c=1;
	st.top=-1;
	while(c==1){
		printf("\n 1.push \n 2.pop \n 3.display");
		printf("\n enter your choice \n");
		scanf("%d",&s);
		switch(s){
			case 1:printf("enter the element:");
			      scanf("%d",&a);
			      push(a);
			      break;
			case 2:b=pop();
			      printf("\n poped element=%d",b);
			      break;
			case 3:display();
			default:printf("invalid input");
			}
		printf("\n want to continue\n");
		fflush(stdin);
		scanf("%d",&c);
	}
}
void push(int a){
	if(st.top==15)
	printf("overflow");
	else
	st.top++;
	{
		st.arr[st.top]=a;
	}
}
int pop(){
	int b;
	if(st.top==-1)
	printf("empty");
	else{
		b=st.arr[st.top];
		st.top--;
	}
	return(b);
}
void display(){
	int i;
	for(i=0;i<=st.top;i++)
	printf("\n stack element %d in %d position\n",st.arr[i],i);
}
