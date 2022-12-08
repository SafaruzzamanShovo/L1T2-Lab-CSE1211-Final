#include <stdio.h>
int main() {
   int i, j, rows;
   printf("Enter the number of rows: ");
   scanf("%d", &rows);
   int n=1;
   
   for (i = 1; i <= rows; ++i) {
      for (j = 1; j <= n; ++j) {
         printf("*");
      }
      n+=2;
      printf("\n");
   }
   return 0;
}
