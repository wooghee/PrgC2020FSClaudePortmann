#include<stdio.h>

int readValue;
int i = 0;

int main(void){
	printf("Enter a int: ");
	scanf("%d", &readValue);
	printf("\nreadValue: %d", readValue);
	printf("\nsize of (bytes): %ld", sizeof(readValue));
	printf("\n");
	return 0;
}
