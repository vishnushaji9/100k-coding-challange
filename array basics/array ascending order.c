#include <stdio.h>
int main(){
    
    int arr[]={1,8,3,2,9,4,5,3,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i,j,temp;
    
    for(i = 0; i < size-1; i++){
        for(j = i+1; j < size; j++){
            if(arr[i] > arr[j]){
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] =  temp;
            }
        }
    }
    printf(" array reverse ");
    for(i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
}