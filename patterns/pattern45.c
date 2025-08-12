//     *
//    * *
//   *   *
//  *     *
// *********
#include <stdio.h>
int main(){
    int i,j,n=5;
    
    for(i = 1; i <= n; i++){
        for(int space=0;space<n-i; space++)
        printf(" ");
        for(j = 1; j <= 2*i-1; j++){
         if(j==1 ||j==2*i-1 || i==n){
             printf("*");
         }else{
             printf(" ");
         }
         
        }
        printf("\n");
    }
    
}