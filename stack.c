#include<stdio.h>

int sttop=-1;
char st[6];
void push(char ele)
{
	if(sttop>=6)
	printf("\n stack is full");
	else{
		sttop++;
		st[sttop]=ele;
	}
}

char pop()
{
	char ch=' ';
	if(sttop<0)
	printf("stack is empty");
	else
	{
		ch=st[sttop];
		sttop--;
	}
	return ch;
}
int main(){
	int ans=0;
	char ele=' ';
	while(1)
	{
		printf("\n 1 push \n 2.pop \n3.exit");
		scanf("%d",&ans);
		if(ans==1)
		{
			printf("enter a char to push\n");
			fflush(stdin);
			scanf("%c",&ele);
			push(ele);
		}
		else
		if(ans==2)
		{ele=pop();
		printf("value:%c\n",ele);
		}
		else
		break;
	}
	return 0;
}
