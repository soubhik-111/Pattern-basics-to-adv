//    1
//   123
//  12345
// 1234567

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
            printf(" ");
        }
        for (int j = 0; j < 2*i+1 ; j++)
        {
            printf("%d",j+1);
        }
        printf("\n");
    }
    
    return 0;
}