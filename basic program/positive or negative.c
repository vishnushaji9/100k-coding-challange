// Check if a number is positive or negative.
// ➤ Input: A number.
// ➤ Output: "Positive" or "Negative"
#include <stdio.h>

int main(){
    int a;
    printf("enter  the number");
    scanf("%d",&a);
    if(a>0){
        printf("%d is positive",a);
    }
    else{
        printf("%d is negative",a);
    }
    return 0;
}