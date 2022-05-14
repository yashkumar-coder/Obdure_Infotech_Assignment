// WAP to find out whether the entered number is Armstrong or not.

#include <stdio.h>
int Armstrong(int num){
    int r, sum = 0, temp;

    for (temp = num; num != 0; num = num / 10)
    {
        r = num % 10;
        sum = sum + (r * r * r);
    }
    if (sum == temp)
        printf("%d is an Armstrong number.\n", temp);
    else
        printf("%d is not an Armstrong number.\n", temp);
}
int main()
{
    int num;

    printf("enter the number: ");
    scanf("%d", &num);
    Armstrong(num);
    return 0;
}