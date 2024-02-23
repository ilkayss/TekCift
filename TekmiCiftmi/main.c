#include <stdio.h>
#include <time.h>
#include <stdlib.h>


int main(int argc, const char * argv[]) {
  
     int sayi1 , sayi2 ;
     srand(time(NULL)); // Her seferinde farkli deger uretmek icin
     sayi1 = rand() % 100;
     sayi2 = rand() % 100;
     printf("%d sayisi ile %d sayisi tek mi cift mi ?\n" , sayi1 , sayi2);
     if (sayi1 % 2 == 0 && sayi2 % 2 == 0) {
          printf("%d sayisi ve %d sayisi cifttir...\n" , sayi1 , sayi2);
     }else if (sayi1 % 2 == 1 && sayi2 % 2 == 1){
          printf("%d sayisi ve %d sayisi tektir...\n" , sayi1, sayi2);
     }else if(sayi1 % 2 == 1 && sayi2 % 2 == 0){
          printf("%d sayisi tektir ve %d sayisi cifttir...\n" , sayi1 , sayi2);
     }else
          printf("%d sayisi cifttir ve %d sayisi tektir...\n" , sayi1 , sayi2);
     return 0;
}
