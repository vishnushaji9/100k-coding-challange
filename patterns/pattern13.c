

#include <stdio.h>
// 1 3 5 7 9
// 3 5 7 9
// 5 7 9
// 7 9
// 9

int main(){
    int i,j,n=5;
    for(i=0; i<=n; i++){
        for(j=1+2*i; j<=9; j+=2){
            printf("%d ",j);
        }
        printf("\n");
    }
}