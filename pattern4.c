// n = 4
// 1
// 1 3
// 1 3 5
// 1 3 5 7

#include <stdio.h>
int main()
{
    // Your code goes here
    int n;
    scanf("%d",n);
    for (int i = 0; i < n; i++)
    {
        int a = 1;
        for (int j = 0; j <= i; j++)
        {
            printf("%d ", a);
            a = a + 2;
        }
        printf("\n");
    }
    return 0;
}