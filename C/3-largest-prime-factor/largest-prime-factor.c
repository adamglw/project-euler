/* The prime factors of 13195 are 5, 7, 13 and 29.
 *
 * What is the largest prime factor of the number 600851475143?
 */
#include<stdio.h>
#include<stdbool.h>

bool isprime(int n);

int main(void){
    long long number = 600851475143;
    long long product = 1;

    // Prime factors perfecty divide number
    for(int n = 2; n <= 32000; n++){
        // Exit if n exceeds int memory allocation
        if(n == 32000){
            printf("Largest prime factor of %lli is too large.\n", number);
            return 1;
        }
        if(isprime(n) == true){
            if(number % n == 0){
                product = product * n;
                if(product == number){
                    printf("Largest prime factor of %lli is %i.\n", number, n);
                    break;
                }
            }
        }
    }

    return 0;
}

// Function to determine if n is prime 
// Uses Sieve of Eratosthenes style algorithm
bool isprime(int n){

    // Smallest prime in 2
    if (n <= 1) return false;
    // 2 and 3 are primes
    if (n <= 3) return true;
    // Anything divisible by 2 or 3 is not prime
    if (n % 2 == 0 || n % 3 == 0) return false;
    // Increment over larger odd numbers until prime is found
    for (int i = 5; i*i <= n; i = i + 6){
        if (n % i == 0 || n % (i + 2) == 0){
            return false;
        }
        else{
            return true;
        }
    }
}
