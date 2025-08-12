
// 1 
// 2 1 
// 3 2 1 
// 4 3 2 1 
#include <stdio.h>

int main() {
    int i, j;
    int n = 4;

    for(i=0; i<4; i++){
        for(j=1+i; j>=1; j--){
            printf("%d ",j);
        }
        printf("\n");
    }

}
