#include<stdio.h>
#include<stdlib.h>
 struct node
{
	int data;
	struct node *next;
};
struct node *h,*temp,*newnode,*nextnode;
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
	
	h=NULL;
	while(1){
		printf("1.insetionAtbeg\n2.insertionAtend\n3.insertionAtmid\n4.deleteAtbeg\n5.deleteAtend\n6.deleteAtmid\n7.display\n8.exit\n");
		scanf("%d",&ch);
		if(ch==1)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("enter new value:");
			scanf("%d",&(newnode->data));
			newnode->next=NULL;
			insertionAtbeg();
		}
	   else if(ch==2)
		{
			newnode=(struct node*)malloc(sizeof(struct node));
			printf("enter new value:");
			scanf("%d",&(newnode->data));
			newnode->next=NULL;
			insertionAtend();
		}
		else if(ch==3)
		{
		 	newnode=(struct node*)malloc(sizeof(struct node));
			printf("enter new value:");
			scanf("%d",&(newnode->data));
		
			insertionAtmid();  
		}
		else if(ch==4)
		{
			deleteAtbeg();
		}
		else if(ch==5)
		{
			deleteAtend();
		}
		else if(ch==6)
		{
			deleteAtmid();
		}
		else if(ch==7)
		{
			display();
		}
		else
		exit(1);
	}
	return 0;
}
void display()
{
	
	for(temp=h;temp!=NULL;temp=temp->next)
	printf("%d\n",temp->data);
}
void insertionAtbeg(){

	if(h==NULL){
		h=newnode;
	}
	else{
 	newnode->next=h;
		h=newnode;
	}
}
void insertionAtend(){
	
	if(h==NULL){
		h=newnode;
	}
	else{
		for(temp=h;temp->next!=NULL;temp=temp->next)
		temp->next=newnode;
		newnode->next=NULL;
	}
}
void insertionAtmid(){
	
	int pos,i=1;
	printf("\n enter the position\n");
	scanf("%d",&pos);
	if(i>pos)
	{
	    printf("invalid pos");
	}
	else{
	    temp=h;
	while(i<pos){
		temp=temp->next;
		i++;
	}
	newnode->next=temp->next;
	temp->next=newnode;
}
}
void deleteAtbeg()
{
	
	temp=h;
	h=h->next;
	free(temp);
}
void deleteAtend(){
	struct node*prev;
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
	int pos,i=1;
	printf("\n enter the position\n");
	scanf("%d",&pos);
	
	while(i<pos){
		temp=temp->next;
		i++;
	}
	nextnode->next=temp->next;
	temp->next=newnode->next;
	free(nextnode);
}

