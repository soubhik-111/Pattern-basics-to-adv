// n=7
//    *
//   ***
//  *****
// *******
//  *****
//   ***
//    *

#include <stdio.h>
int main()
{
    int n,nst,nsp;
    scanf("%d",&n);
    // n=5;
    nsp=n/2;
    nst=1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < nsp; j++)
        {
            printf(" ");
        }
        for (int j = 0; j < nst; j++)
        {
            printf("*");
        }
        if(i<n/2){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    

    return 0;
}