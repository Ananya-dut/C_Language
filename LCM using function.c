#include<stdio.h>
#include<conio.h>
int get_lcm(int a,int b);

int main(){
	int n1,n2,lcm;
	printf("\n enter any two positive numbers to get the LCM of:\n");
	scanf("%d %d",&n1,&n2);
	lcm=get_lcm(n1,n2);
	printf("\n LCM of %d and %d is %d",n1,n2,lcm);
	return 0;
}

int get_lcm(int n1,int n2){
	static int max=1;
	if(max%n1==0 && max%n2==0){
		return max;
	}
	else{
max++;
get_lcm(n1,n2);
return max;
	}
}

