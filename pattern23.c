// n=4
// * * * * * * * 
// * * *   * * *
// * *       * *
// *           *

#include <stdio.h>
int main()
{
    // Your code goes here
    int n, nsp = 1, nst;
    // n = 4;
    scanf("%d",&n);
    nst = n - 1;
    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            for (int j = 0; j < 2 * n - 1; j++)
            {
                printf("* ");
            }
        }
        else
        {
            for (int j = 0; j < nst; j++)
            {
                printf("* ");
            }
            for (int j = 0; j < nsp; j++)
            {
                printf("  ");
            }
            for (int j = 0; j < nst; j++)
            {
                printf("* ");
            }
            nsp += 2;
            nst--;
        }
        printf("\n");
    }

    return 0;
}