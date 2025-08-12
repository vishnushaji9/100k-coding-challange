// 543212345
//  4321234
//   32123
//    212
//     1

#include <stdio.h>

int main() {
    
    int i,j,n=5,space;
     for(i=n; i>=1; i--){
         for(space=0;space<n-i; space++){
             printf(" ");
         }
        for(j=i; j>=1;j--){
             printf("%d",j);
         }
         for(j=2; j<=i;j++){
             printf("%d",j);
         }
         printf("\n");
     }
    

    return 0;
}