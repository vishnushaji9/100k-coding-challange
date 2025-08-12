// A 
// 1 1 
// B B B 
// 2 2 2 2 
// C C C C C 
// 3 3 3 3 3 3 
// D D D D D D D 


#include <stdio.h>
int main(){
    
    int i,j,n = 7;
    int k = 'A';
    int num = 1;
    
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            if(i%2 !=0){
                printf("%c ",k);
                
            }else{
                printf("%d ",num);
            }
        }
        if(i%2!=0){
            k++;
        }else{
            num++;
        }
        printf("\n");
    }
}

// @second method //


// A 
// 1 1 
// B B B 
// 2 2 2 2 
// C C C C C 
// 3 3 3 3 3 3 
// D D D D D D D 

  


#include <stdio.h>
int main(){
    
    int i,j,n = 7;
    int k = 'A';
    int num = 1;
    
    for(i = 1; i <= n; i++){
        for(j = 1; j <= i; j++){
            if(i%2 !=0){
                printf("%c ",k);
                
            }else{
                printf("%d ",num);
            }
        }
        if(i%2!=0){
            k++;
        }else{
            num++;
        }
        printf("\n");
    }
}