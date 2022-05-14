/*Two numbers are entered through the keyboard. WAP to find the value of one number
raised to the power of another.*/

#include <stdio.h>
#include <math.h>
int main()
{
    int num1, num2, val;
    printf("enter the num1: ");
    scanf("%d", &num1);
    printf("enter the num2: ");
    scanf("%d", &num2);
    val = pow(num1, num2);
    printf("num: %d\n", val);

    return 0;
}