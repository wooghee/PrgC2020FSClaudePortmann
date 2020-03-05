#include<stdio.h>

int main(void){

// var init

	short largeShort = 32760;
	int numerator = 19;
	int denomirator = 5;
	int result;
	float e = 2.718281828;
	float e1 = 0;
	float e2 = 0;
	int dblNominator = 0; //geht mit double nicht!!!!!

	int a = 1;
	int b = 1;

// ops
	// overlfow

	largeShort = largeShort + 12345;
	
	printf("largeShort = %d ", largeShort);
	if(largeShort<0){
		printf("        !!!short overflowed!!!\n");
	}
	
	// int 
	result = numerator/denomirator;
	
	printf("result = %d \n", result);

	printf("e++ = %f ", e++);
	if(e+1<=e){
		printf("             !!!wrong!!! %f",e);
	}
	printf("\ne-- = %f ", e--);
	if(e-1>=e){
		printf("             !!!wrong!!! %f",e);
	}
	
	e1 = e++;
	e2 = e--;

	printf("\ne++ = %f \n", e1);
	printf("e-- = %f \n", e2);

	dblNominator = dblNominator % 3;
	printf("dblNominator = %d \n", dblNominator);
	
	
	printf("1++ = %d \n", a++);
	printf("++1 = %d \n", ++b);

	return 0;
}
