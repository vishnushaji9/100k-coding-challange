// 1       1 
//  2     2 
//   3   3 
//    4 4 
//     5 
//    4 4 
//   3   3 
//  2     2 
// 1       1 

#include <stdio.h>

int main(){
    
    int i,j,n=5;
    
    for(i = 1; i <= n*2-1; i++){
        
        int star;
        int space;
        int num;
        
        if(i <= n){
            star  =  n - i + 1;
            
            space =  i - 1;
            num = i;
            
        } else {
            
             star  =  i - n + 1;
            
            space  =  2 * n - i - 1;
             num   =  2  * n - i;
        }
        for(int k = 0; k <  space; k++){
            printf(" ");
        }
        for(j = 1; j <= star; j++){
            if(j==1 || j==n - i + 1 || j==i - n + 1){
                printf("%d ",num);
            }else{
                printf("  ");
            }
        }
        printf("\n");
    }
    
}


