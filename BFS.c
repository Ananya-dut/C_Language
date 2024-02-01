#include<stdio.h>
void BFS(int);
int g[10][10],visited[10],t;
int main(){
	int i,j;
	printf("enter total number of vertex\n");
	scanf("%d",&t);
	for(i=0;i<t;i++){
		for(j=0;j<t;j++)
		scanf("%d",&g[i][j]);
	}
	for(i=0;i<t;i++){
		visited[i]=0;
	}
	BFS(0);
}
void BFS(int v){
	int j,i;
	printf("%d",&v);
	visited[v]=1;
	for(j=0;j<t;j++){
		if(!visited[j] && g[i][j])
		BFS(j);
	}
}
