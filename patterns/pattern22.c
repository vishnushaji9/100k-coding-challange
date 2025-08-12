    //       1
    //      1 2
    //     1 2 3
    //    1 2 3 4
    //   1 2 3 4 5
    //    1 2 3 4
    //     1 2 3
    //      1 2
    //       1
#include <stdio.h>

int main() {
    int i,j,n=5;
    for(i=1; i<=n*2-1; i++){
        int k = i<=n ? i:2*n-i;
            for(int space=0;space<n-k;space++){
                printf(" ");
            }
            for(j=1; j<=k; j++){
                printf("%d ",j);
            }
            printf("\n");
    }
    return 0;
}