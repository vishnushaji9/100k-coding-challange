//      1 
//     2 2 
//    3 3 3 
//   4 4 4 4 
//  5 5 5 5 5 


#include <stdio.h>

int main() {
   
   int i,j,n=5;
   
   for( i = 0; i <= n; i++){
       for(int space = 0; space <= n-i; space++)
       printf(" ");
       for(j = 1; j <= i; j++){
           printf("%d ",i);
       }
       printf("\n");
   }

    return 0;
}