#include<stdio.h>
#include<stdlib.h>

#define LOOP_ARRAY_LENGTH 6

int printIntArray(int inputArray[], int arrayLength);

int main(int argc, char *argv[]){

	int loopArray[LOOP_ARRAY_LENGTH] = {0};
	
	// check if they are really all zero:
	printf("Check if all array elements are zero: \n");

	// print all array elements to console	
	printIntArray(loopArray, LOOP_ARRAY_LENGTH);
	printf("\n");	

	// save array index as array value
	for(int j=0; j < LOOP_ARRAY_LENGTH; j++){
		
		loopArray[j] = j;
	}	
	
	// print all array elements to console
	printIntArray(loopArray, LOOP_ARRAY_LENGTH);
	printf("\n");	
	
	return EXIT_SUCCESS;
}

int printIntArray(int inputArray[], int arrayLength){
	for(int i=0; i < arrayLength; i++){
		printf("%d\n", inputArray[i]);
	}	
	return EXIT_SUCCESS;
}
