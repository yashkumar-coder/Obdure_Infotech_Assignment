// WAP to find the maximum number and second maximum in an array.

#include <stdio.h>
int max_array(int n){
    int arr[100], maximum_1, maximum_2;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    maximum_1 = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maximum_1)
        {
            maximum_1 = arr[i];
        }
    }
    maximum_2 = arr[0];
    for (int i = 1; i < n; i++)
    {
        if (arr[i] > maximum_2 && maximum_1 > arr[i])
        {
            maximum_2 = arr[i];
        }
    }
    printf("maximum_1 = %d and maximum_2 = %d", maximum_1, maximum_2);
}
int main()
{
     int n;
    printf("enter the size of array: ");
    scanf("%d", &n);
    printf("elements are: ");
    max_array(n);
    return 0;
}

// OUTPUT

// enter the size of array: 5
// elements are: 1
// 2
// 3
// 4
// 5
// maximum_1 = 5 and maximum_2 = 4