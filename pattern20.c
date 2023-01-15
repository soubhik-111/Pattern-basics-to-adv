//         1
//       1 2 1
//     1 2 3 2 1
//   1 2 3 4 3 2 1
// 1 2 3 4 5 4 3 2 1

#include <stdio.h>
int main()
{
    // Your code goes here
    int n, x = 0;
    n = 5;
    // scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - 1 - i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < 2 * i + 1; j++)
        {
            if (j <= i)
                printf("%d ", j + 1);
            else if (j == i + 1)
            {
                x = j - 1;
                printf("%d ", x);
                // printf(" i = %d j= %d ", i, j);
            }
            else
            {
                x--;
                printf("%d ", x);
            }
        }
        printf("\n");
    }
    return 0;
}