#include<stdio.h>
int main(){
	char ch, lowercase_vowel, uppercase_vowel;
	printf("enter an alphabet:");
	scanf("%c",&ch);
	lowercase_vowel=(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u');
	uppercase_vowel=(ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U');
	if(lowercase_vowel||uppercase_vowel){
		printf("it is a vowel");
	}
	else{
		printf("it is not a vowel");
	}
	return 0;
}
