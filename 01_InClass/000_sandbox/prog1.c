#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void PrintUsageMessage(void);
void PrintReversedInput(char input[]);

int main(int argc, char* argv[] ){
	
	if(argc != 2){
		// too many arguments
		PrintUsageMessage(); 
		return 0;
	} else {
		PrintReversedInput(*argv);
	}	
	return 0;
}


void PrintUsageMessage(void){
	printf("Usage:  reverser\n\t \
	enter one word, reverser will reverse it\n");
	
}

void PrintReversedInput( char input[]){
/*
	for(int j = 7; j<=strlen(input)+6; j++){
		printf("%c", input[j]);
	}
   	printf("\nlength of input: %ld\n", strlen(input));
*/
	for(int i = strlen(input)+6; i >= 7; i--)
	{
	
	printf("%c", input[i]);

	
	}
	printf("\n");
}







