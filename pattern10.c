// *       * 
//   *   *
//     *
//   *   *   
// *       *

#include <stdio.h>
int main()
{
    // Your code goes here
    int n = 5;
    // scanf("%d",n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n ; j++)
        {
            if (i==j || i+j==n-1)
                printf("* ");
            else
            {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}