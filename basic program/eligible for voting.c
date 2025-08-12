// Check if a person is eligible to vote.
// ➤ Condition: Age should be 18 or more.

#include <stdio.h>
int main(){
    int age;
    printf("enter the age");
    scanf("%d",&age);
    if(age>18){
        printf("eligible for voting");
    }else if(18==age){
        printf("eligible for voting");
    }else{
        printf("not eligible for voting");
    }
}