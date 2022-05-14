// WAP which reverses every word in the string.
#include <stdio.h>
#include <string.h>
int main()
{
    char str[100], temp;
    int i, len;
    printf("enter the word: ");
    scanf("%s", str);
    len = strlen(str) - 1;
    for (i = 0; i < strlen(str) / 2; i++)
    {
        temp = str[i];
        str[i] = str[len];
        str[len] = temp;
    }
    printf("reverse the word: %s", str);
    return 0;
}
