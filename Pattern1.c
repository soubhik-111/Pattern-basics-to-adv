// n = 5
// * 
// * * 
// * * * 
// * * * * 
// * * * * * 

#include<stdio.h>
int main(){
    //Your code goes here
    int n;
    scanf("%d",n);
    for(int i=0;i<n;i++){
        for (int j = 0; j <= i; j++)
        {
            printf("* ");
        }
            printf("\n");
    }
    return 0;
}