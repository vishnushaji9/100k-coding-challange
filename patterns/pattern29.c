// 1 
// 1 2 
// 1 2 3 
// 1 2 3 4 
// 1 2 3 4 5 
// 1 2 3 4 
// 1 2 3 
// 1 2 
// 1 


#include <stdio.h>

int main(){
    
    int i,j,n=5;
    for(i = 0; i <= 2*n-1; i++){
      int star;
      int space;
    
    if(i<n){
        star = i;
       
     }else{
         star = 2*n-i;
         
     }
   
     for(int k = 1; k <= star; k++){
         printf("%d ",k);
     }
     printf("\n");
  }
    
}