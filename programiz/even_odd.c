#include <stdio.h>

int	main(){
	
	int num;

	printf("Enter a number:\n");
	scanf("%i", &num);

	if (num % 2 == 0)
	  printf("The number %i is even.", num);
	else
	  printf("The number %i is odd.", num);

	return 0;
}
