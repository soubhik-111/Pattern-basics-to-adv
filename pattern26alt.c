// n=4
// 1 2 3 4 3 2 1
// 1 2 3   3 2 1
// 1 2       2 1
// 1           1

#include <stdio.h>
int main()
{
    // Your code goes here
    int n, a = 1;
    // n=4;
    scanf("%d", &n);

    for (int i = 0; i < n; i++)
    {
        if (i == 0)
        {
            for (int j = 1; j <= 2 * n - 1; j++)
            {
                printf("%d ", a);
                if (j < n)
                    a++;
                else
                    a--;
            }
        }
        else
        {
            for (int j = 1; j <= n-i; j++)
            {
                printf("%d ",j);
            }
            for (int j = 0; j < 2*i-1; j++)
            {
                printf("* ");
            }
             for (int j = 1,a=n-i+1; j <= n-i; j++)
            {
                printf("%d ",--a);
            }
        }
        printf("\n");
    }

    return 0;
}