// WAP to generate all combinations of 1, 2 and 3.

#include <stdio.h>
int combination(int x, int y, int z)
{
    for (x = 1; x <= 3; x++)
    {
        for (y = 1; y <= 3; y++)
        {
            for (z = 1; z <= 3; z++)
            {
                if (x != y && y != z && x != z)
                {
                    printf("%d %d %d\n", x, y, z);
                }
            }
        }
    }
}
int main()
{
    int x, y, z;
    printf("All Combinations: \n");
    combination(x, y, z);
}
