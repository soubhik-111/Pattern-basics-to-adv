// A
// A B
// A B C
// A B C D

#include <stdio.h>
int main()
{
    int n = 4;
    // scanf("%d",n);
    for (int i = 0; i < n; i++)
    {
        int a = 65;
        for (int j = 0; j <= i; j++)
        {
            printf("%c ",a);
            a++;
        }
            printf("\n");
    }
    return 0;
}