// WAP to print all the prime numbers from 1 to 300.

#include <stdio.h>
int prime(int num){
    int i, prime;
    for (num = 1; num <= 300; num++)
    {
        prime = 0;
        for (i = 2; i <= num / 2; i++)
        {
            if (num % i == 0)
            {
                prime = 1;
                break;
            }
        }
        if (prime == 0 & num != 1)
            printf("%d\t", num);
    }
}
int main()
{
    int num;
    prime(num);
    return 0;
}



