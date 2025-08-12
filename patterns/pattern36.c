// 1 1 1 1 1 1 
// 1 1 1 1 2 2 
// 1 1 1 3 3 3 
// 1 1 4 4 4 4 
// 1 5 5 5 5 5 
// 6 6 6 6 6 6 

#include <stdio.h>

int main(){
    
    int i,j,n=6;
    
    for(i = 1; i <= n; i++){
        for(j = 1; j < n - i + 1; j++){
            printf("1 ");
        }
        for(j = 1; j <=  i; j++){
            printf("%d ",i);
        }
        printf("\n");
    }
    
}