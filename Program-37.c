// WAP to check whether the entered string is palindrome or not
#include <stdio.h>
#include <string.h>

int main()
{
    char str[20];
    int i, results;
    int flag = 0;

    printf("Enter a string:");
    scanf("%s", str);

    results = strlen(str);

    for (i = 0; i < results; i++)
    {
        if (str[i] != str[results - i - 1])
        {
            flag = 1;
            break;
        }
    }

    if (flag)
    {
        printf("%s is not a palindrome", str);
    }
    else
    {
        printf("%s is a palindrome", str);
    }
    return 0;
}

// OUTPUT

/*Enter a string:wow
wow is a palindrome*/

/*Enter a string:vcgj
vcgj is not a palindrome*/