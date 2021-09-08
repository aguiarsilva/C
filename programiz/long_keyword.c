#include <stdio.h>

int	main()
{
	int a;
	long b;
	long long c;
	double d;
	long double e;

	printf("The size of integer is = to %zu bytes\n", sizeof(a));
	printf("The size of long is = to %zu bytes\n", sizeof(b));
	printf("The size of long long is = to %zu bytes\n", sizeof(c));
	printf("The size of double is = to %zu bytes\n", sizeof(d));
	printf("The size of long double is = to %zu bytes\n", sizeof(e));

	return 0;
}

