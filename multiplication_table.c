#include <stdio.h>

int	main(){
	int n, i, prod;
	
	i = 0;
	printf("Enter the number to see the multiplication table: ");
	scanf("%d", &n);

	while (i <= 10){
	prod = i * n;
	printf("%i x %i = %i\n", i, n, prod);
	i++;
}
	return 0;

}

