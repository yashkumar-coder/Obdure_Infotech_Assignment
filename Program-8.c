/* If the ages of A, B and C are input through the keyboard, write a program to determine the youngest of the three. */

/* If the ages of A, B and C are input through the keyboard, write a program to determine
the youngest of the three. */

#include <stdio.h>
int age(int a, int b, int c)
{
    if (a < b)
    {
        if (a < c)
        {
            printf("Youngest  is A");
        }
        else
        {
            printf("Youngest is C");
        }
    }
    else if (b < c)
    {
        printf("Youngest is B");
    }
    else
    {
        printf("Youngest is C");
    }
}
int main()
{
    int a, b, c;
    printf("enter the age of A ");
    scanf("%d", &a);
    printf("enter the age of B ");
    scanf("%d", &b);
    printf("enter the age of C ");
    scanf("%d", &c);
    age(a, b, c);
    return 0;
}

