#include <stdio.h>

	int	main()
{

	float a, b, product;

	printf("Enter the first float number:\n");
	scanf("%f", &a);
	printf("Enter the second float number:\n");
	scanf("%f", &b);

	product = a * b;

	printf("The product of %f and %f is %f.", a, b, product);

	return 0;

}
