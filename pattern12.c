// 1 
// 3 5
// 7 9 11
// 13 15 17 19

#include <stdio.h>
int main()
{
    // Your code goes here
    int n = 4,a=1;
    // scanf("%d",n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i ; j++)
        {
                printf("%d ",a);
                a+=2;
        }
        printf("\n");
    }

    return 0;
}