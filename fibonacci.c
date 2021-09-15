#include <stdio.h>

int main(){
	
	int n1;
	int n2;
	int n3;
	int i;
	int number;

	n1 = 0;
	n2 = 1;

	printf("Enter the amount of elements: ");
	scanf("%d", &number);

	printf("%d %d ", n1, n2);
	for(i = 2; i < number; i++){
		n3 = n2+n1;
		printf("%d ", n3);
		n1 = n2;
		n2 = n3;
	}

	return 0;

}
