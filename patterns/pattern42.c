
// 1 2 3 4 5 6 7 8 9 
//   1 2 3 4 5 6 7 
//     1 2 3 4 5 
//       1 2 3 
//         1 
//       1 2 3 
//     1 2 3 4 5 
//   1 2 3 4 5 6 7 
// 1 2 3 4 5 6 7 8 9 




#include <stdio.h>

int main()
{
   int i,j,n=5;
    for(i = 1; i <=2*n-1; i++){
       int star;
       int space;
      if(i <= n)
      {
          star = 2 * (n - i)+1;
          space =  i - 1;
      }else{
          
          star = ((i - n) * 2) + 1; 
          space  = 2 * n  - i - 1;
      }
      for(int k = 0; k < space; k++){
          printf("  ");
      }
      for(int j = 1; j <=star; j++)
      {
              printf("%d ",j);
      }
      printf("\n");
  }
    return 0;
}