//  WAP that interchanges the odd and even elements of an array.

#include <stdio.h>
int interchange(int *a, int *b)
{
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}
int main()
{
    int num[100];
    int i, length;
    printf("Enter the size of array");
    scanf("%d", &length);
    for (i = 0; i < length; i++)
    {
       scanf("%d", &num[i]);
    }
    for(i=0; i<length; i++){
        interchange(&num[i], &num[i+1]);
    }
    for(i=0; i<length; i++){
        printf("%d", num[i]);
    }
    
    return 0;
}