// A 
// A B
// A B C 
// A B C D 
// A B C D E 


#include <stdio.h>

int main(){

    int i,j,n=5;
    char ch = 'A';
    
    for(i=0; i<n; i++){
        for(j=0; j<=i; j++){
            printf("%c ",'A'+j);
        }
        printf("\n");
    }
}