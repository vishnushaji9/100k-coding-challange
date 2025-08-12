// 0 1 
// 0 2 4 
// 0 3 6 9 
// 0 4 8 12 16 
// 0 5 10 15 20 25 
// 0 6 12 18 24 30 36 

#include <stdio.h>

int main() {
   
  int i,j,n=6,value;
   
   for(i=1; i<=n; i++){
       for(j=0; j<i+1; j++){
           value = i*j;
           printf("%d ",value);
       }
       printf("\n");
   }
  
   

    return 0;
}