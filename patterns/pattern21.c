// *******
// *     *
// *******

#include <stdio.h>

int main() {
    int i,j,n=4;
    
    for(i=1; i<=3; i++){
        for(j=1; j<=7; j++){
            if(i==1 || i==3 || j==1 || j==7){
            printf("*");
            }else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}
