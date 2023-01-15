// n = 4
// 1
// 1 2
// 1 2 3
// 1 2 3 4

#include<stdio.h>
int main(){
    //Your code goes here
    int n;
    scanf("%d",n);
    for(int i=0;i<n;i++){
        for (int j = 1; j <= i+1; j++)
        {
            printf("%d ",j);
        }
            printf("\n");
    }
    return 0;
}