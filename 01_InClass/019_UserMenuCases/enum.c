#include <stdio.h>
#include <stdlib.h>

typedef enum{
	INVALID = 0,
	PRINTCODENAME,
	CALCONEPLUSONE,
	EXIT
} MenuSelection;

MenuSelection PrintUserMenu( void );
int runMenuPrompt = 1;

/********************************************************
 * main
 ********************************************************/
int main (int argc, char *argv[] )
{
	int runMenuPrompt = 1;
	MenuSelection menuSelection = EXIT;
	while(runMenuPrompt){
		menuSelection = PrintUserMenu();
		switch(menuSelection)
		{	
		case PRINTCODENAME:
			printf("You entered 1\n");
			break;
		
		case CALCONEPLUSONE:
			printf("2 + 2 = 4\n");
			break;
		
		case EXIT:
			printf("\n\n\nexiting... goodbye\n\n\n");
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
MenuSelection PrintUserMenu( void ) {
	int selectedMenuItem = 0;
	printf("\n------------------------------------\n");
	printf("* * * * Welcome to CoolCode! * * * *\n");
	printf("------------------------------------\n");
	printf("Select from the following options:\n");
	printf("1: print code number\n");
	printf("2: 2+2\n");
	printf("3: exit\n");
	printf("-> ");
	scanf("%d", &selectedMenuItem );

	if(selectedMenuItem != PRINTCODENAME && selectedMenuItem != CALCONEPLUSONE && selectedMenuItem != EXIT){
		selectedMenuItem = INVALID;
	}
	return selectedMenuItem;
}
