// Hollow Rectangle
// * * * * * * 
// *         *
// *         * 
// * * * * * *

#include <stdio.h>
int main()
{
    // Your code goes here
    int n = 4, m = 6;
    // scanf("%d",n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (i == 0 || j == 0 || i == n - 1 || j == m - 1)
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");
    }

    return 0;
}