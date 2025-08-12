#include <stdio.h>
int main(){
    int i,j,n=5;
    
    for(i = 1; i <= 2 * n -1; i++){
        int star;
        int space;
        int num;
        if(i <= n){
            star =  i;
            space  =  n - i;
        }else{
            star =  2 * n - i;
            space  = i - n ; 
        }
        for(j = 0; j < space; j++){
            printf(" ");
        }
        for(int k = 1; k  <= star; k++){
         
             printf("* ");
        }
        printf("\n");
    }
}
