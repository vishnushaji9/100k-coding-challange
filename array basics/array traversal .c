#include <stdio.h>
int main(){
    
    int arr[]={1,8,3,2,9,4,5,3,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    for(int i = 0; i < size; i++){
        printf("%d ",arr[i]);
    }
    return 0;
}