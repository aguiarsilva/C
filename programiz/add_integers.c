#include <stdio.h>

int	main()
{
	int a;
	int b;
	int sum;
	
	puts("Enter the first number:\n");
	scanf("%i", &a);
	puts("Enter the second number:\n");
	scanf("%i", &b);
	
	sum = a + b;
	
	printf("The sum of %i and %i is %i", a, b, sum);

	return 0;
}
