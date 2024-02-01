#include<stdio.h>
//function prototype
void printHello();
void printGoodbye();
//function call
int main(){
	printHello();
	printGoodbye();
	return 0;
}
//function defination
void printHello(){
	printf("Hello\n");
}
void printGoodbye(){
	printf("Goodbye\n");
}
