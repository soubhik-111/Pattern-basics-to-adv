// n=5
// 1 2 3 4 5 6 7 8 9
// 1 2 3 4   6 7 8 9
// 1 2 3       7 8 9
// 1 2           8 9
// 1               9

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
        a=1;
        if (i == 1)
        {
            for (int j = 1; j <= 2 * n - 1; j++)
            {
                printf("%d ",j);
            }
        }
        else
        {
            for (int j = 0; j < nst; j++)
            {
                printf("%d ",a);
                a++;
            }
            for (int j = 0; j < nsp; j++)
            {
                printf("  ");
                a++;
            }
            for (int j = 0; j < nst; j++)
            {
                printf("%d ",a);
                a++;
            }
            nsp += 2;
            nst--;
        }
        printf("\n");
    }

    return 0;
}