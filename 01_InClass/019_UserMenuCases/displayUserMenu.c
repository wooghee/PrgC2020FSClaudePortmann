#include <stdio.h>
#include <stdlib.h>

int PrintUserMenu( void );
int runMenuPrompt = 1;

/********************************************************
 * main
 ********************************************************/
int main (int argc, char *argv[] )
{
	int menuSelection = 0;
	while(runMenuPrompt){
		menuSelection = PrintUserMenu();
		switch(menuSelection)
		{	
		case 1:
			printf("You entered 1\n");
			break;
		
		case 2:
			printf("2 + 2 = 4\n");
			break;
		
		case 3:
			printf("You entered 3\n");
			break;
		case 4:
			printf("exiting\n\n\ngoodbye\n\n\n");
			runMenuPrompt = 0;
			break;
		default:
			printf("RTFM!!\n");
			runMenuPrompt = 0;
			break;
		} //switch(menuSelection)
	} // while(runMenuPrompt)
}

/*	prints the user menu and returns the selected item
 * 	Inputs: None.
 * 	Outputs: int selectedMenuItem
 *  Error behavior: returns zero for all invalid menu item selections
 */	
int PrintUserMenu( void ) {
	int selectedMenuItem = 0;
	printf("\n------------------------------------\n");
	printf("* * * * Welcome to CoolCode! * * * *\n");
	printf("------------------------------------\n");
	printf("Select from the following options:\n");
	printf("1: print code number\n");
	printf("2: 2+2\n");
	printf("3: print code number\n");
	printf("4: exit\n");
	printf("-> ");
	scanf("%d", &selectedMenuItem );
	return selectedMenuItem;
}
