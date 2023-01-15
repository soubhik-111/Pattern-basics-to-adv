// n = 4
// 4 4 4 4 4 4 4
// 4 3 3 3 3 3 4
// 4 3 2 2 2 3 4
// 4 3 2 1 2 3 4
// 4 3 2 2 2 3 4
// 4 3 3 3 3 3 4
// 4 4 4 4 4 4 4

#include <stdio.h>
int main()
{
    int n, len, k;
    // n = 5; 
    scanf("%d", &n);
    len = n * 2 - 1;

    // Complete the code to print the pattern.

    for (int i = 0; i < len; i++)
    {
        k = n;
        for (int j = 0; j < len; j++)
        {
            printf("%d ", k);
            if (i < n)
            {
                if (i > j)
                    k--;
                else if(j+i>=len-1)
                    k++;
            }
            else
            {
                if(i+j<len-1)
                k--;
                else if(i<=j)
                k++;
            }
        }

        printf("\n");
    }

    return 0;
}