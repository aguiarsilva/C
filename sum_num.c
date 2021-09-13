#include <stdio.h>

int	main(){
	int n, i, sum;
	i = 0;
	sum = 0;

	printf("Enter an integer number: ");
	scanf("%d", &n);

	while ( i <= n){
		sum += i;	
		i++;
}
	printf("The sum of the numbers is %d.\n", sum);

	return 0;
}
