// 1
// A B
// 1 2 3
// A B C D
// 1 2 3 4 5

#include <stdio.h>
int main()
{
    // Your code goes here
    int n = 5;
    // scanf("%d",n);
    for (int i = 0; i < n; i++)
    {
        int ch = 65;
        for (int j = 1; j <= i + 1; j++)
        {
            if (!(i % 2))
                printf("%d ", j);
            else
            {
                printf("%c ", ch);
                ch++;
            }
        }
        printf("\n");
    }

    return 0;
}