// n = 5
// A B C D E F G H I
// A B C D   F G H I
// A B C       G H I
// A B           H I
// A               I

#include <stdio.h>
int main()
{
    // Your code goes here
    int n, nsp = 1, nst,a;
    // n = 4;
    scanf("%d",&n);
    nst = n - 1;
    for (int i = 1; i <= n; i++)
    {
        a=65;
        if (i == 1)
        {
            for (int j = 1; j <= 2 * n - 1; j++)
            {
                printf("%c ",a);
                a++;
            }
        }
        else
        {
            for (int j = 0; j < nst; j++)
            {
                printf("%c ",a);
                a++;
            }
            for (int j = 0; j < nsp; j++)
            {
                printf("  ");
                a++;
            }
            for (int j = 0; j < nst; j++)
            {
                printf("%c ",a);
                a++;
            }
            nsp += 2;
            nst--;
        }
        printf("\n");
    }

    return 0;
}