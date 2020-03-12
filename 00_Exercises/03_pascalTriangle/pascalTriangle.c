#include<stdio.h>
#include<stdlib.h>

void PrintUsageMessage(void);
void PrintPascalTriangle( int tablelimit);

int lowerlimit = 1;
int upperlimit = 20;

int space = 1;
int number = 1;

int main(int argc, char* argv[] ){
		
	// relevant variables
	int inputValue = 0;
	
	
	if(argc != 2){
		// too many arguments
		PrintUsageMessage(); 
		return 0;
	} else {
		inputValue = atoi(argv[1]);
		if(inputValue >= lowerlimit && inputValue <= upperlimit){
			// input is valid
			PrintPascalTriangle(inputValue);
		} else {
			// input not in range [1,10]
			PrintUsageMessage();
			return 0;
		}
		
	
	}	
	return 0;
}


void PrintUsageMessage(void){
	printf("Usage:  pascalTriangle wholeNumber\n\t \
	wholeNumber: ONE integer on the interval [%d,%d]\n", lowerlimit, upperlimit);
	
}

void PrintPascalTriangle( int tablelimit){
    
	for(int i = 0; i < tablelimit; i++)
	{
		for(space = 1; space <= tablelimit-i; space++){
			printf("  ");
		}
		for(int j = 0; j <= i; j++){
			if ( j == 0 || i == 0){
				}else{
				number = number*(i-j+1)/j;
				}
			printf("%4d", number);
		}
		printf("\n");		
	}
}







