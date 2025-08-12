// *
// *
// ***
// **
// **
// ******
// ***
// ***
// ***
// *********
#include <stdio.h>

int main(){
    int i,j,n=3;
    
    for(i = 1; i <= n; i++){
       if(i==1){
           printf("*\n");
       }
       for(int k = 1; k <= i; k++){
           for(j = 1; j <= i; j++){
               printf("*");
           }
           printf("\n");
       }
       for(int k = 1; k <= n * i; k++){
           printf("*");
       }
       printf("\n");
    }
    
}