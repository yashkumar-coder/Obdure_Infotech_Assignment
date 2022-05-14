/*WAP to find out in a[25] how many are positive, how many are negative, how many are
even and how many are odd*/

#include <stdio.h>
int display(int num)
{
    int positive = 0, negative = 0, even = 0, odd = 0;
    int arr[25] = {-12, -11, -10, -9, -8, -7, -6, -5, -4, -3, -2, -1, 0, 12, 11, 10, 9, 8, 7, 6, 5, 4, 3, 2, 1};

    for (int i = 0; i < 25; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else if (arr[i] % 2 == 0)
        {
            even++;
        }
        else
        {
            odd++;
        }
    }
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Even: %d\n", even);
    printf("Odd: %d\n", odd);
}
int main()
{
    int num;
    display(num);
    return 0;
}
