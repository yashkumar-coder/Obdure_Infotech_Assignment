//  WAP to find whether the entered number is prime or not.

#include <stdio.h>
int prime(int n)
{
    int i, c = 0;
    for (i = 1; i <= n; i++)
    {
        if (n % i == 0)
        {
            c++;
        }
    }

    if (c == 2)
    {
        printf("n is a Prime number");
    }
    else
    {
        printf("n is not a Prime number");
    }
}
main()
{
    int n;
    printf("enter nummber: ");
    scanf("%d", &n);
    prime(n);
    return 0;
}


