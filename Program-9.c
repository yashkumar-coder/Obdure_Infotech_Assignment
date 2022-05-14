/*Write a program that prints the numbers from 1 to 100. But for multiples of three print
“Obdure” instead of the number and for the multiples of five print “Infotech”. For
numbers which are multiples of both three and five, print “ObdureInfotech”.
*/

#include <stdio.h>
int ObdureInfotech(int a){
    for (a = 1; a < 101; a++)
    {
        if (a % 3 == 0 && a % 5 == 0)
        {
            printf("ObdureInfotech\n");
        }
        else if (a % 3 == 0)
        {
            printf("Obdure\n");
        }
        else if (a % 5 == 0)
        {
            printf("Infotech\n");
        }
        else
        {
            printf("%d\n", a);
        }
    }
}
int main()
{
    int a;
    ObdureInfotech(a);
    return 0;
}

