/* 2520 is the smallest number that can be divided by each of the numbers from
 * 1 to 10 without any remainder. 
 *
 * What is the smallest positive number that is evenly divisible by all of the
 * numbers from 1 to 20?
 */

/* We can find the smallest number divisible by 1 through 20 by finding the
 * prime factos of the integers 20 and below and multiplying them together.
 */

#include<stdio.h>

int main(void){
    int i = 20;
    long product = 1;

    for (int n = 2; n <= i; n++){

    }

}

// Funtion to find prime factor of number n
int primefactor(int n){

    if (n % 2 == 0)
