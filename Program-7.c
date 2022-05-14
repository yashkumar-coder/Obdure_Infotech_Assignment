// WAP to find the reverse of a 4 digit number and compare it to the original number.

#include <stdio.h>
int compare(int num)
{
    int rem, rev, original;
    original = num;
    while (num > 0)
    {
        rem = num % 10;
        rev = (rev * 10) + rem;
        num = num / 10;
    }
    if (original == rev)
        printf("This number is equal to its Reverse");
    else
        printf("This number is not equal to its Reverse");
}
int main()
{
    int num;
    printf("Enter a Number: ");
    scanf("%d", &num);
    compare(num);
    return 0;
}