// 1
// 0 1
// 1 0 1
// 0 1 0 1

// #include <stdio.h>
// int main()
// {
//     int n = 4, a = 1;
//     for (int i = 0; i < n; i++)
//     {
//         a = (i % 2 == 0) ? 0 : 1;
//         for (int j = 0; j <= i; j++)
//         {
//             a=(a==0)?1:0;
//             printf("%d ", a);
//         }
//         printf("\n");
//     }

//     return 0;
// }




#include <stdio.h>
int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j <= i; j++)
        {
           if((i+j)%2==0)
           printf("%d ",1);
           else
           printf("%d ",0);
        }
        printf("\n");
    }

    return 0;
}