#include <stdio.h>
int main(){
    
    int arr[]={1,8,3,2,9,4,5,3,6,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,j;
    
    
    for(i = 0; i < size-1; i++){
        int count = 0;
         for(j = i+1; j < size; j++){
            if(arr[i]==arr[j]){
               count++;
               
                
            }
        }
        if(count == 1){
            printf("%d ",arr[i]);
        }
    }
    
    return 0;
}