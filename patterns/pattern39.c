// 50 
// 45 40 
// 35 30 25 
// 20 15 10 5 


#include <stdio.h>

int main() {
    
    int i,j,n=4,k=50;
    
    for(i=1; i <= n; i++){
        for(j = 1; j <= i; j++){
            printf("%d ",k);
            k=k-5;
        }
        printf("\n");
    }

    return 0;
}