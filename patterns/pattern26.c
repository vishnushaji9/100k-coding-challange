// 1 1 1 1 1 
// 0 0 0 0 0
// 1 1 1 1 1 
// 0 0 0 0 0
// 1 1 1 1 1

#include <stdio.h>

int main(){
    
    int i,j,n=4;
    
    for(i = 0; i <= n; i++){
        for(j = 0; j <= n; j++){
            if(i==1 || i==3 || i==5){
                printf("0 ");
            }else{
             printf("1 ");
            }
        }
        printf("\n");
    }
}