//       A
//     A B
//   A B C
// A B C D


#include<stdio.h>
int main(){
    //Your code goes here
    int n;
    // n=4;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-i-1; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < i+1; j++)
        {
            printf("%c ",65+j);
        }
            printf("\n");
    }
    return 0;
}