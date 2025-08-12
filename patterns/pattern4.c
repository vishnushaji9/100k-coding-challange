// * * * * * * * 
//  * * * * * *
//   * * * * *
//    * * * *
//     * * *
//      * *
//       * 

#include <stdio.h>

int main(){
    int i,j,n;

    printf("enter the number");
    scanf("%d",&n);
    for(i=n; i>=1; i--){
        for(int space=0; space<n-i+1; space++){
            printf(" ");
        }
        for(j=1; j<=i; j++){
            printf("* ");
        }
        printf("\n");
    }
}