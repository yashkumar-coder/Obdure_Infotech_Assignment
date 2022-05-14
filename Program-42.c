/*WAP that converts all lowercase characters in a given string to its equivalent uppercase
character.
*/
#include <stdio.h>
#include <string.h>
int main()
{
    char lowercase, uppercase;
    printf("\nenter the string: ");
    scanf("%c", &lowercase);
    uppercase = lowercase - 32;
    printf("\nafter that: %c", uppercase);

    return 0;
}