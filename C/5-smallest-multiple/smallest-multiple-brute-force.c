/* 2520 is the smallest number that can be divided by each of the numbers from
 * 1 to 10 without any remainder. 
 *
 * What is the smallest positive number that is evenly divisible by all of the
 * numbers from 1 to 20?
 */
#include<stdio.h>

int main(void){
  int i = 20;

// Add 20 to i until an integer divisible by 1 though 20 is found.
  while (i % 2  != 0 || i % 3  != 0 || i % 4  != 0 || i % 5  != 0 ||
         i % 6  != 0 || i % 7  != 0 || i % 8  != 0 || i % 9  != 0 ||
         i % 10 != 0 || i % 11 != 0 || i % 12 != 0 || i % 13 != 0 ||
         i % 14 != 0 || i % 15 != 0 || i % 16 != 0 || i % 17 != 0 ||
         i % 18 != 0 || i % 19 != 0 || i % 20 != 0)
    {
      i += 20;
    }

  printf("Smallest positive number divisible by numbers 1 - 20 is %i.\n", i);

  return 0;
  
}

/* Obviously, this is a rather lazy brute force approach and isn't scalable.
 * A more thoughtful solution would be to find the prime factors of each
 * integer we seek to divide by and multiply these primes together to find
 * the smallest positive number evently divisible by all of them. 
 */
