//     *
//   * *
//   *   *
//  *     *
// *       *
//  *     *
//   *   *
//   * *
//     *


#include <stdio.h>
int main(){
    int i,j,n=5;
    
    for(i = 1; i <= 2 * n -1; i++){
        int star;
        int space;
        int num;
        if(i <= n){
            star =  2  * i - 1;
            space  =  n - i;
        }else{
            star =  ((2  * n) - i)* 2 - 1;
            space  = i - n ; 
        }
        for(j = 0; j < space; j++){
            printf(" ");
        }
        for(int k = 1; k  <= star; k++){
         if(k==1 || k==2 * i - 1 || k==(2 * n - i)*2-1){
             printf("*");
         } else{
             printf(" ");
         }
        }
        printf("\n");
    }
}
