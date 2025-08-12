#include <stdio.h>
int main(){
    
    int arr[]={1,8,3,2,9,4,5,3,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int count = 0, i;
    
    for(i = 0; i < size; i++){
        count++;
        printf("%d ",arr[i]);
    }
    printf("\ncount elements : ");
    printf("%d",count);
    return 0;
}