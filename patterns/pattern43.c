// 1 2 3 4 5 
//  1 2 3 4 
//   1 2 3 
//   1 2 
//     1 
//   1 2 
//   1 2 3 
//  1 2 3 4 
// 1 2 3 4 5 
#include <stdio.h>

int main(){
    
    int i,j,n=5;
    
    for(i = 1; i <= n*2-1; i++){
        
        int star;
        int space;
        
        if(i <= n){
            star  =  n - i + 1;
            
            space =  i - 1;
            
        } else {
            
             star  =  i - n + 1;
            
            space  =  2 * n - i - 1;
        }
        for(int k = 0; k <  space; k++){
            printf(" ");
        }
        for(j = 1; j <= star; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
    
}



