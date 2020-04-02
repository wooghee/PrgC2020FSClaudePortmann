#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void PrintUsageMessage(void);
long nChooseK(int n, int k);
long factorial(int n);
int one;
int two;

int main(int argc, char *argv[] ){
	
	if(argc != 3){
		// too many arguments
		PrintUsageMessage(); 
		return 0;
	} else {
		one = atoi(argv[1]);
		two = atoi(argv[2]);
		printf("%d choose %d equals: %ld\n\n", one, two, nChooseK(one,two));
	}	
	return 0;
}


void PrintUsageMessage(void){
	printf("Usage:  nChooseK\n\t \
	enter two ints, nChooseK will calculate nChooseK\n");
	
}

long nChooseK(int n, int k){
	long result = (factorial(n))/(factorial(k)*factorial(n-k));
	return result;
}

long factorial(int n){
	if(n>=1)
		return n*factorial(n-1);
	else
		return 1;
}




