//       A
//     A B C
//   A B C D E
// A B C D E F G

#include<stdio.h>
int main(){
    //Your code goes here
    int n;
    // n=4;
    scanf("%d",&n);
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n-1-i; j++)
        {
            printf("  ");
        }
        for (int j = 0; j < 2*i+1 ; j++)
        {
            printf("%c ",65+j);
        }
        printf("\n");
    }
    
    return 0;
}