// Create a simple calculator using switch.
// ➤ Input: Two numbers and an operator (+, -, *, /)
// ➤ Output: Perform and print the result.

#include <stdio.h>

int main(){

    int num1,num2,eq,result;
    printf("enter first number :");
    scanf("%d",&num1);
    printf("enter second number :");
    scanf("%d",&num2);
    printf("choose your equation");
    printf("\n1   + \n2   - \n3   x \n4   / ");
    printf("\nselect");
    scanf("%d",&eq);
    switch(eq){
        case 1:
        result=num1+num2;
        printf("result  : %d",result);
        break;
        case 2:
        result=num1-num2;
        printf("result : %d",result);
        break;
        case 3:
        result=num1*num2;
        printf("result : %d",result);
        break;
        case 4:
        result=num1/num2;
        printf("result : %d",result);
        break;
        default:
        printf("invalid");
        break;
        
    }
    
}