// 1 
// 2 3
// 4 5 6
// 7 8 9 10

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
                a++;
        }
        printf("\n");
    }

    return 0;
}