#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
typedef struct node
{
	int data;
	struct node *next;
}n;
n*h,n*temp;
void insertionAtbeg();
void insertionAtend();
void insertionAtmid();
void deleteAtbeg();
void deleteAtend();
void deleteAtmid();
void display();
int main()
{
	int ch=0;
	n*head,*temp,*newnode;
	head=NULL;
	while(1){
		printf("1.insetionAtbeg\n2.insertionAtend\n3.insertionAtmid\n4.deleteAtbeg\n5.deleteAtend\n6.deleteAtmid\n.7.display\n8.exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			newnode=(n*)malloc(sizeof(n));
			printf("enter new value:");
			scanf("%d",&(newnode->data));
			newnode->next=NULL;
			insertionAtbeg(&head,&newnode);
		}
	   else if(ch==2)
		{
			newnode=(n*)malloc(sizeof(n));
			printf("enter new value:");
			scanf("%d",&(newnode->data));
			newnode->next=NULL;
			insertionAtend(&head,&newnode);
		}
		else if(ch==3)
		{
		 	newnode=(n*)malloc(sizeof(n));
			printf("enter new value:");
			scanf("%d",&(newnode->data));
			newnode->next=NULL;
			insertionAtmid(&head,&newnode);  
		}
		else if(ch==4)
		{
			deleteAtbeg(&head);
		}
		else if(ch==5)
		{
			deleteAtend(&head);
		}
		else if(ch==6)
		{
			deleteAtmid(&head);
		}
		else if(ch==7)
		{
			display(head);
		}
		else
		exit(1);
	}
	return 0;
}
void display(n*h)
{
	n*temp;
	for(temp=h;temp!=NULL;temp=temp->next)
	printf("%d\n",temp->data);
}
void insertionAtbeg(){
	n*temp;
	if((h)==NULL){
		h=newnode;
	}
	else{
		(newnode)->next=h;
		h=newnode;
	}
}
void insertionAtend(){
	n*temp;
	if((h)==NULL){
		h=newnode;
	}
	else{
		for(temp=h;temp->next!=NULL;temp=temp->next)
		temp->next=(newnode);
		(newnode)->next=NULL;
	}
}
void insertionAtmid(){
	n*temp,*newnode;
	int pos,i=1;
	printf("\n enter the position\n");
	scanf("%d",&pos);
	while(i<pos){
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
void deleteAtbeg()
{
	n*temp;
	temp=h;
	h=h->next;
	free(temp);
}
void deleteAtend(){
	n*prev;
	temp=h;
	while(temp->next!=NULL){
		prev=temp;
		temp=temp->next;
	}
	if(temp==h)
	h=NULL;
	else{
		prev->next=NULL;
	}
	free(temp);
}
void deleteAtmid(){
	n*temp,*nextnode;
	int pos,i=1;
	printf("\n enter the position\n");
	scanf("%d",&pos);
	while(i<pos-1){
		temp=temp->next;
		i++;
	}
	nextnode=temp->next;
	temp->next=nextnode->next;
	free(nextnode);
}

