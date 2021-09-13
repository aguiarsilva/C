//Using Arithmetic Operator

#include<stdio.h>
int main()
{
    int a,b, sum, diff, prod, div, remainder;
    printf("Enter a:");
    scanf("%d", &a);
    printf("Enter b:");
    scanf("%d", &b);

    sum = a+b;
    printf("a+b = %d\n", sum);
    
    diff = a-b;
    printf("a-b = %d\n", diff);

    prod = a*b;
    printf("a*b = %d\n", prod);

    div = a/b;
    printf("a/b = %d\n", div);

    remainder = a%b;
    printf("a%%b = %d\n", remainder);

    }