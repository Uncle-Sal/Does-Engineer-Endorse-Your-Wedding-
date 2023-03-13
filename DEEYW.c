// Compilation of calculator and random number. no code by me xd These comments are a way of explaining all of the stuff to myself and others//
#include <stdio.h>
#include <time.h>
#include <stdlib.h>

int main(){
  char a = 69;
  do {
  printf("\nTell\n"); // Basic printing, only thing i made.//
  scanf("%lf");    // Asks them for anything // 
  srand(time(NULL));   // Initialises rand, the random number thingy. // 
  int r = rand() % 10;     // % 10 makes it go up to ten or pick number between 1 and 10. I tried using different variable and it did not work. I guess r is just that cool B)// 
  if (r > 5)   // If it is above 5 say yes //
   printf("\nYeah\n");
  if (r < 5)   // If it is below 5 say no //
    printf("\nnope\n");
    // For those who are new, use \n for a new line //
  } while (a == 68); 
}  

  
