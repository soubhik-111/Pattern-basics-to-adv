// n=4;
//       A
//     A B A
//   A B C B A
// A B C D C B A

#include<stdio.h>
int main(){
    //Your code goes here
    int n,x;
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
            if(j<=i)
            printf("%c ",65+j);
            else if(j==i+1){
                x=65+j-1;
                printf("%c ",--x);
            }
            else{
                printf("%c ",--x);
            }
        }
        printf("\n");
    }
    
    return 0;
}