#include <stdio.h>

int main() {
    
    int arr[]={1,2,3,4,5,6,7,1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,j;
   
    
   for(i = 0; i < size; i++){
       int unique= 0;
       for(j = 0; j < size; j++){
           if((arr[i]==arr[j]) && i!=j){
               unique =1;
              break;
           }
       }
       if(unique==0){
          printf("%d ",arr[i]);
       }
   }
    return 0;
}