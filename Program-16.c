/* WAP to enter numbers until the user wants. At the end it should display the count of
positive, negative and zeros entered */

#include <stdio.h>
int display(int num){
    int positive = 0, negative = 0, zeros = 0;
    int arr[100];
    printf("enter the number: ");
    scanf("%d", &num);
    for (int i = 0; i < num; i++)
    {
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < num; i++)
    {
        if (arr[i] > 0)
        {
            positive++;
        }
        else if (arr[i] < 0)
        {
            negative++;
        }
        else if (arr[i] == 0)
        {
            zeros++;
        }
    }
    printf("Positive: %d\n", positive);
    printf("Negative: %d\n", negative);
    printf("Zeros: %d\n", zeros);
}
int main()
{
    int num;
    display(num);
    return 0;
}