#include <stdio.h>

int	main()
{

	int a;
	int b;
	int temp;

	printf("Enter a number for variable a:\n");
	scanf("%i", &a);
	printf("Enter a number for variable b:\n");
	scanf("%i", &b);

	printf("Your selected numbers are: a = %i and b = %i\n", a, b);
	
	temp = a;
	a = b;
	b = temp;

	printf("After the swap, your variables are: a = %i and b = %i", a, b);

	return 0;

}
