#include <stdio.h>
#include <stdlib.h>

void displayUserMenu(int );

int main( int argc, char *argv[]){
	int switchCase = 0;
	printf("Enter a value vetwwen 1 and 3: ");
	scanf("%d", &switchCase);
	
	displayUserMenu(switchcase);	

	return EXIT_SUCCESS;
}

void displayUserMenu(int ){

switch(switchCase){
		case 1:
			printf("you entered 1\n");
			break;
		case 2:
			printf("you entered 2\n");
			break;
		case 3:
			printf("you entered 3\n");
			break;
		default:
			printf("you are unable to read instructions\n");
			break;
	}


}
