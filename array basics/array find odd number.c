#include <stdio.h>

int main() {
    
    int arr[]={1,2,3,4,5,6,7,1,2,3};
    int size = sizeof(arr)/sizeof(arr[0]);
    int i;
    
    for(i = 0; i < size; i++){
        if(arr[i]%2==1){
            printf("%d ",arr[i]);
        }
    }
    return 0;
}