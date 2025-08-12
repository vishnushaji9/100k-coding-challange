#include <stdio.h>
int main(){
    
    int arr[]={1,8,3,2,9,4,5,3,6};
    int size = sizeof(arr)/sizeof(arr[0]);
    int pos,val,i,j;
    
    printf("\nenter the position : ");
    scanf("%d",&pos);
    
    // printf("\nenter the value : ");
    // scanf("%d",&val);
    
   for(i = 0; i < size; i++){
       if(i==pos){
           for(j = i; j < size; j++){
               arr[j] = arr[j + 1];
           }
       }
   }
   size--;
    
    printf("\n after insertion in array :");
    for(i = 0; i < size; i++){
        printf("%d ",arr[i]);
    } 
    return 0;
}