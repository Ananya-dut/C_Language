#include<stdio.h>
#include<stdlib.h>
typedef struct tree{
	int data;
	struct tree *left,*right;
}t;
t*root;
void insert(t**root,t**newnode){
	if(*root==NULL){
		*root=*newnode;
	}
	else if((*root)->data>(*newnode)->data){
		insert(&(*root)->left,&(*newnode));
	}
	else{
	    insert(&(*root)->right,&(*newnode));
    }
}
void inorder(t*root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d",root->data);
		inorder(root->right);
	}
}
void postorder(t*root){
	if(root!=NULL){
		postorder(root->left);
		postorder(root->right);
		printf("%d",root->data);
	}
}
void preorder(t*root){
	if(root!=NULL){
		printf("%d",root->data);
		preorder(root->left);
		preorder(root->right);
	}
}
int main(){
	int choice,data;
	t*ptr;
	root=NULL;
	while(1){
		printf("\n1.insert\n2.inorder\n3postorder\n4.preorder\n5.exit\n");
		printf("enter your choice:");
		scanf("%d",&choice);
		switch(choice){
			case 1:
				ptr=(t*)malloc(sizeof(t));
				printf("enter the data:");
				scanf("%d",&data);
				ptr->data=data;
				ptr->left=ptr->right=NULL;
				insert(&root,&ptr);
				break;
			case 2:
				inorder(root);
				break;
			case 3:
				postorder(root);
				break;
			case 4:
				preorder(root);
				break;
			case 5:
				exit(1);
				break;		
				}
	}
}
