// WAP to find the factorial value of any number.
#include <stdio.h>

int factorial(int n)
{
    int i, fact = 1;
    for (i = 1; i <= n; i++)

        fact = fact * i;

    printf("Factorial of %d is: %d", n, fact);
}
int main()
{

    int n;

    printf("Enter a number to find factorial: ");

    scanf("%d", &n);
    factorial(n);
    return 0;
}