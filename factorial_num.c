#include <stdio.h>

int	main(){
	int n, i;
	i = 1;
	unsigned long long factorial = 1;

	printf("Enter a number to check its factorial: ");
	scanf("%d", &n);

	if (n < 0){
		printf("The factorial for this number doesn't exist!");
	}
	else{

	while (i <= n){
		factorial *= i;
		i++;
}

	printf("The factorial of %d is %llu.", n, factorial);

}

	return 0;
}
