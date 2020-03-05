#include<stdio.h>
#include<stdlib.h>

void PrintUsageMessage(void);
void PrintMultiTable( int tablelimit);

const int lowerlimit = 1;
const int upperlimit = 10;

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
			PrintMultiTable(inputValue);
		} else {
			// input not in range [1,10]
			PrintUsageMessage();
			return 0;
		}
		
	
	}	
	return 0;
}


void PrintUsageMessage(void){
	printf("Usage:  mutiTable wholeNumber\n\t \
	wholeNumber: ONE integer on the interval [%d,%d]\n", lowerlimit, upperlimit);
	
}

void PrintMultiTable( int tablelimit){
    
	for(int i = 1; i <= tablelimit; i++)
	{
		for(int j = tablelimit; j >= 1; j--){
			printf("%d\t", i*j);
		}
		printf("\n");		
	}
}







