#include <stdio.h>
int main(){
    
    int arr[]={1,8,3,2,9,4,5,3,6,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,j;
    int count = 0;
    
    
    for(i = 0; i < size-1; i++){
        int isdup = 0;
         for(j = i+1; j < size; j++){
            if(arr[i]==arr[j]){
               isdup=1;
               break;
            }
        }
        if(isdup == 1){
            for(int  k = i; k < size; k++){
                arr[k] = arr[k + 1];
            }
            size--;
            i--;
        }
        
    }
    printf("\nafter element in array : ");
    for(i = 0; i < size; i++){
        printf("%d",arr[i]);
    }
    
    return 0;
}