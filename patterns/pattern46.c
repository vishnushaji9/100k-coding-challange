//           1 
//         1 2 3 
//       1 2 3 4 5 
//     1 2 3 4 5 6 7 
//   1 2 3 4 5 6 7 8 9 
//     1 2 3 4 5 6 7 
//       1 2 3 4 5 
//         1 2 3 
//           1 




#include <stdio.h>

int main(){
    
    int i,j,n=5;
    
    for(i = 1; i <= n*2-1; i++){
        
        int star;
        int space;
        
        if(i <= n){
            star = (2*i)-1;
            
            space = n - i +1;
            
        } else {
            
             star  = ((2 * n) - i) * 2 -1;
            
            space = i - n + 1;
        }
        for(int k = 0; k < space; k++){
            printf("  ");
        }
        for(j = 1; j <= star; j++){
            printf("%d ",j);
        }
        printf("\n");
    }
  }

