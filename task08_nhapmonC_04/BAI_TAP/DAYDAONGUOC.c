#include<stdio.h>
#include<conio.h>
#define MAX 30

int main() {
   int size, i, arr[MAX];
   int *ptr;

   ptr = &arr[0];
   scanf("%d", &size);
   for (i = 0; i < size; i++) {
      scanf("%d", ptr);
      ptr++;
   }

   ptr = &arr[size - 1];

   for (i = size - 1; i >= 0; i--) {
      printf("%d ", *ptr);
      ptr--;
   }

   return(0);
}
/* Duyệt và in mảng theo chiều đảo ngược bởi sử dụng con trỏ
Input
3
1 2 3
Output
3 2 1 */
