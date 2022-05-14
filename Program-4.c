// WAP to find the sum of the digits of a 4 digit number

#include <stdio.h>
int digit(int num)
{
    int rem, sum = 0;
    while (num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    printf("the sum of digits is %d", sum);
}
int main()
{
    int num;
    printf("enter the 4 digits number: ");
    scanf("%d", &num);
    digit(num);
}

