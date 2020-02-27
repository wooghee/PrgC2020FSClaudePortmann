#include<stdio.h>

int switchvalue = 0;
int i = 0;

int main(void) {
	// list of options
	printf("1 for 100");

	printf("\n2 for 200\n");

	scanf(" %d", &switchvalue);

	switch(switchvalue){
		case 1:
			while(i < 100){
			printf("100\n");
			i++;
			}
			break;
		case 2:
			printf("firefox http://www.youtube.com\n");
			break;
		default:
			printf("no valid switchcase \n");
			break;
	}

	return 0;
}

