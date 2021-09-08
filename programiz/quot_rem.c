#include <stdio.h>

int	main()
{
	int a;
	int b;
	int mod;
	int div;

	printf("Enter the first integer number:\n");
	scanf("%i", &a);
	printf("Enter the second integer number:\n");
	scanf("%i", &b);
	
	mod = a % b;
	div = a / b;

	printf("The division of %i by %i is %i, and the remainder is %i.", a, b, div, mod);

	return 0;

}
