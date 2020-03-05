#include <stdio.h>
#include <stdlib.h>

int main( int argc, char *argv[]){

	printf("number of input arguments: %d\n", argc);
	
	for(int i = 1; i < argc; i++){
		int x = atoi(argv[i]);
		printf("Argument %d was %s and as an int %d\n", i, argv[i], x);
	}
	
	int result = atoi(argv[1]) * atoi(argv[2]);

	printf("multiplikationsresultat ist: %d\n", result);

	return 0;
}
