// WAP to reverse a string.
#include <stdio.h>
#include <string.h>

void main()
{
    char str[50], temp;
    int i, length;
    printf("Enter String : ");
    scanf("%s", str);
    length = strlen(str) - 1;
    for (i = 0; i < strlen(str) / 2; i++)
    {
        temp = str[i];
        str[i] = str[length];
        str[length--] = temp;
    }
    printf("Reverse string :%s", str);
}

// OUTPUT

/*Enter String : vaibhavsharma
Reverse string :amrahsvahbiav*/