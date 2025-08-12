// 1 
// 1 2 
// 1   3 
// 1     4 
// 1 2 3 4 5 


#include <stdio.h>
int main(){
    int i,j,n=5;
    
    for(i = 1; i <= n; i++){
        for(j = 1; j <= 2*i -1; j++){
            if(j==1 || j==2*i -1 || i==n ){
                printf("%d ",j);
            }else{
                printf("  ");
            }
            
        }
        printf("\n");
    }
}