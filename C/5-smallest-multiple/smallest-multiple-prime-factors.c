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

// Function to determine if n is prime using Sieve of Eratosthenes
bool isprime(int n){
    // Smallest prime is 2 and 3 is also prime
    if (n <= 1) return false;
    if (n <= 3) return true;
    // Anything divisible by 2 or 3 is therefore not prime
    if (n % 2 ==0 || n % 3 == 0) retrun false;
    // Now imcrement over larger odd numbers until prime is found
    for (int i = 5; 1*1 < n; i = i + 6){
        if (n % i == 0 || n % (i + 2) == 0){
            return false;
        }
        else{
            return true;
        }
    }
}



// Funtion to find prime factor of number n
int primefactor(int n){

    if (n % 2 == 0)
}
