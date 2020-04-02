#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define MAX_NAME_LENGTH 50
#define MAX_AGE 30

const double maxNorthCH = 47.808455;
const double minNorthCH = 45.817920;
const double maxEastCH = 10.492035;
const double minEastCH = 5.95591;
const double gotthardNorth = 46559167;

struct Geolocation
{
	double latitude;
	double longitude;
};

struct Student
{
	char name[MAX_NAME_LENGTH];
	int age;
	struct Geolocation currentLocation;
};



// function prototypes
void printStudentPassByReference(struct Student *inputStudent);
void clamp(double*inputValue, double minValue,double maxValue);
void checkStudentPosition(struct Student inputStudent);

int main( int argc, char *argv[]){

	struct Student student1; // instantiate a Student

	printf("Enter name: ");
	fgets(student1.name, MAX_NAME_LENGTH, stdin);

	printf("\nEnter age: ");
	scanf("%d", &student1.age);

	if(student1.age >= MAX_AGE){
		printf("\n\n\n!!!you are too old to be a student!!!\n\n\n");
		return EXIT_SUCCESS;
	}

	printf("\nEnter latitude: ");
	scanf("%lf", &student1.currentLocation.latitude);
	clamp(&student1.currentLocation.latitude, minNorthCH, maxNorthCH);

	printf("\nEnter longitude: ");
	scanf("%lf", &student1.currentLocation.longitude);
	clamp(&student1.currentLocation.longitude, minEastCH, maxEastCH);

	printStudentPassByReference(&student1); // pass by reference

	checkStudentPosition(student1);
/*
	printf("Name orig. Student: %s", student1.name);
	printf("\nAge orig. Student: %d\n", student1.age);
*/
	printf("\n\n\n");
	
	return EXIT_SUCCESS;
}



void printStudentPassByReference(struct Student *inputStudent)
{
	printf("\nStudent information (by reference):\n");
	printf(  "-----------------------------------\n");
	printf("Name: %s", inputStudent->name);
	printf("\nAge: %d\n", inputStudent->age);
	inputStudent->age++;
	

}
void clamp(double*inputValue, double minValue,double maxValue){
	if(*inputValue < minValue){
		*inputValue = minValue;
	}
	if(*inputValue > maxValue){
		*inputValue = maxValue;
	}
}

void checkStudentPosition(struct Student inputStudent){
	struct Geolocation *pSL = &inputStudent.currentLocation;
	
	printf("\n\n");
	printf("Student Location: \n");
	printf("-----------------\n");
	printf("Latitude: %f\n", pSL->latitude);
	printf("Longitude: %f\n", pSL->longitude);
	if(pSL->latitude < gotthardNorth){
		printf("\n\n\n\nStudent located south of Gotthard. Report to Berset. \n\n\n\n");
	}
}

