#include <stdio.h>

int main(){
	int year;
	printf("Enter a year: ");
	scanf("%d", &year);

	if (year % 400 == 0){
		printf("The year %d is a leap year.\n", year);
	}
	else if (year % 100 == 0){
		printf("The year %d is not a leap year.\n", year);
	}
	else if (year % 4 == 0){
		printf("the year %d is a leapr year.\n", year);
	}
	else {
		printf("The year % d is not a leap year.\n", year);
	}

	return 0;
}
