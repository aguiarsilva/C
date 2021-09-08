#include <stdio.h>

int	main()
{
	char a;

	printf("Enter the characther to get ASCII code:\n");
	scanf("%c", &a);

	printf("The character '%c' has the ASCII code of %d.", a, a);

	return 0;
}

