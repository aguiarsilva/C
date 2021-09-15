#include <stdio.h>

int main(){

	int n1;
	int n2;

	printf("Enter the first positive number: ");
	scanf("%d", &n1);
	printf("Enter the second positive number: ");
	scanf("%d", &n2);

	while(n1 != n2){
		if(n1 > n2){
			n1 -= n2;
		}
		else {
			n2 -= n1;
		}

	}
	printf("HCF for the numbers is: %d\n", n1);

	return 0;
}
