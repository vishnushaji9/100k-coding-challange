// Find the largest of three numbers using if-else if ladder.
// ➤ Input: Three integers.
// ➤ Output: Print the largest number.

#include <stdio.h>

int main(){
    int a,b;
    printf("enter the number");
    scanf("%d%d",&a,&b);

    if(a>b){
        printf("a is largest",a);
    }else if(b>a){
        printf("b is largest",b);
    }
    return 0;
}