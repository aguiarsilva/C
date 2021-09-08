#include <stdio.h>

int	main(){

	int n1;
	int n2;
	int n3;

	printf("Enter first number: \n");
	scanf("%i", &n1);
	printf("Enter second number: \n");
	scanf("%i", &n2);
	printf("Enter third number: \n");
	scanf("%i", &n3);

	if (n1 >= n2 && n2 >= n3)
		printf("The biggest number is %i", n1);
	else if (n2 >= n1 && n2 >= n3)
		printf("The biggest number is %i", n2);
	else
		printf("The biggest number is %i", n3);

	return 0;
}
