// n=4
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1

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
                printf("%d ",a);
                if(j<=n/2+1)
                a++;
                else
                a--;
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
            }
            for (int j = 0; j < nst; j++)
            {
                printf("%d ",--a);
            }
            nsp += 2;
            nst--;
        }
        printf("\n");
    }

    return 0;
}