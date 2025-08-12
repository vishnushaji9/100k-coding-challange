// Find the largest of three numbers using if-else if ladder.
// ➤ Input: Three integers.
// ➤ Output: Print the largest number.


#include <stdio.h>

int main(){
    int a,b,c;
    printf("enter 3 numbers ");
    scanf("%d%d%d",&a,&b,&c);
    if((a>b)&&(a>c)){
        printf("a is largest %d",a);
    }else if((b>a)&&(b>c)){
        printf("b is largest %d",b);
    }else{
        printf("c is largest %d",c);
    }
}
