#include<stdio.h>

int val1 = 0;
int val2 = 0;

int main(void) {

	printf("enter val1: ");
	scanf(" %d", &val1);
	printf("enter val2: ");
	scanf(" %d", &val2);

	if(val1 > val2){
		printf("%d is bigger than %d \n", val1, val2);
	}else if(val1 == val2){
		printf("%d is equal to %d \n", val1, val2);
	}else{
		printf("%d is less than %d \n", val1, val2);
	}

	return 0;
}

