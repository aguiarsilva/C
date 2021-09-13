#include <stdio.h>

int	main(){
	char a;

	printf("Enter a character: ");
	scanf("%c", &a);

	if ((a >= 'a' && a <= 'z') || (a >= 'A' && a <= 'Z')){
		printf("The character %c is an alphabet character.\n", a); 
}
	else {
		printf("The character %c is not an alphabet character.\n", a);
}

	return 0;
}
