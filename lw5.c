#include<stdio.h>

int main() {
   int n;

   printf("satir sirasi gir: ");
   scanf("%d", &n);

     // üst kısım için
   for(int i = 1; i <= n; i++) {
     // bosluk bırak
     for(int j = i; j < n; j++) {
       printf("  ");
     }

     // azalan sırayla
     for(int k = i; k >= 1; k--) {
       printf("%d ", k);
     }

     // artan sırayla
     for(int l = 2; l <= i; l++) {
       printf("%d ", l);
     }

     // yeni satır
     printf("\n");
   }

   // alt kısım için
   for(int i = n - 1; i >= 1; i--) {
     // bosluk icin
     for(int j = n; j > i; j--) {
       printf("  ");
     }

     // azalan sırayla
     for(int k = i; k >= 1; k--) {
       printf("%d ", k);
     }

     // artan sırayla
     for(int l = 2; l <= i; l++) {
       printf("%d ", l);
     }

     // yeni satir
     printf("\n");
   }

}