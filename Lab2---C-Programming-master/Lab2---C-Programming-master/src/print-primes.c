/*
 print-prime.c
 By David Broman.
 Last modified: 2015-09-15
 This file is in the public domain.
*/


#include <stdio.h>
#include <stdlib.h>

#define COLUMNS 6

int is_prime(int n){
   int divider = 2;
   while(divider < n) {
     if(n % divider == 0) {
         return 0;
     }
     divider++;
   }
   return 1;
 }

void print_number(int n){
     for(int i = 0; i < COLUMNS; i++){
         printf("%10d ", n);
     }
     printf("\n");
 }

void print_primes(int n){
  // Should print out all prime numbers less than 'n'
  // with the following formatting. Note that
  // the number of columns is stated in the define
  // COLUMNS

  if(is_prime(n) == 1){
        print_number(n);
    }

//   printf("%10d ", 2);
//   printf("%10d ", 3);
//   printf("%10d ", 5);
//   printf("%10d ", 7);
//   printf("%10d ", 11);
//   printf("%10d ", 13);
//   printf("\n");
//   printf("%10d ", 17);
//   printf("%10d ", 19);
//
//   printf("\n");

    
}
// 'argc' contains the number of program arguments, and
// 'argv' is an array of char pointers, where each
// char pointer points to a null-terminated string.
int main(int argc, char *argv[]){
   if(argc == 2)
     print_primes(atoi(argv[1]));
   else
     printf("Please state an interger number.\n");
   return 0;
}


 
