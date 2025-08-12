// find frequency and delete 2  multiple
#include <stdio.h>

int main() {
   
   int arr[]={1,2,3,4,5,6,5,4,9,11};
   int size = sizeof(arr)/sizeof(arr[0]);
   int i,j,count[20]={0};
   
   for(i = 0; i < size; i++){
       count[arr[i]]++;
   }
   
   for(i = 0; i < size; i++){
       if(arr[i]%3==0){
        for(j = i; j < size; j++){
          arr[j] =  arr[j + 1];  
          }  
        size--;
        i--; 
       }
      
   }
   for(i = 0; i < size; i++){
      if(count[arr[i]]!=0){
           printf("\n%d - %d",arr[i] , count[arr[i]]);
          count[arr[i]]=0;
      }
       
   }

    return 0;
  }