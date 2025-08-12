#include <stdio.h>

int main() {
    
    int arr[]={1,2,3,4,5,6,7,1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int min = arr[0];
    
    for(int i = 0; i <size; i++){
        if(arr[i] < min ){
            min = arr[i];
        }
    }
    printf(" smallest element in array : %d",min);
    return 0;
}