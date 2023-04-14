/*
Problem Statement : Write a program to print L patterns till it's end.
Input : 
4 4
1 2 3 4
5 6 7 8
9 10 11 12
13 14 15 16
Output :
1 5 9 13 14 15 16 2 6 10 11 12 3 7 8 4
*/


#include <stdio.h>
int main()
{
    int r, c, a[100][100], i, j, k, num;
    printf("Enter the number of rows and column resp : \t");
    scanf("%d%d", &r, &c);

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    // for (i = 0; i < r; i++)
    // {
    //     for (j = 0; j < c; j++)
    //     {
    //         printf("%d ", a[i][j]);
    //     }
    //     printf("\n");
    // }

    num = (r < c) ? r : c;
    k = 0;
    while (k < num){
        i=0;
        j=k;
        while (j < c){
            printf("%d ", a[i][j]);
            if (i < r - k -1){
                i++;
            }
            else{
                j++;
            }
        }
        k++;
    }

    return 0;
}