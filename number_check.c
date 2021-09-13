#include <stdio.h>

int main(){
	int num;

	printf("Enter a number: ");
	scanf("%d", &num);

	if (num == 0)
{
		printf("The number you entered is %d.\n", num);
}
	else if (num > 0) {
		printf("The number %d is positive.\n", num);
}
	else {
		printf("The number %d is negative.\n", num);
}
	return 0;
}
