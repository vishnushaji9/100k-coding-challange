// 1.Write a program to print numbers from 1 to n.
// Print all numbers from 1 to n, where n is a positive integer entered by the user.
// Input:
// Enter a number: 5
// Output:
// 1 2 3 4 5






#include <stdio.h>

int main() {
   
   int n;
   
   printf("enter the number");
   scanf("%d",&n);
   
   for(int i = 1; i <= n; i++){
       printf("%d ",i);
   }
    return 0;
}