// 1
// 123
// 12345
// 1234567
// 123456789
// 1234567
// 12345
// 123
// 1
#include<stdio.h>

int main(){
    
    int i,j,n=5;
    
    for(i = 1; i<= 2*n-1; i++){
        int star;
      
        if(i <= n){
            star = 2*i-1;
        }else{
            star = ((2 * n) - i)*2-1; 
        }
        for(int k = 1; k <= star; k++){
            printf("%d",k);
        }
        printf("\n");
    }
    
}