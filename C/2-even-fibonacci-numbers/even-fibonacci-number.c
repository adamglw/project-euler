/* Each new term in the Fibonacci sequance is generated by adding the previous
 * two terms. By starting with 1 and 2, the first 10 terms will be:
 * 
 * 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
 * 
 * By considering the terms in the Fibonacci sequence whose values do not
 * exceed four million, find the sum of the even-valued terms.
 */
#include<stdio.h>

long fibonacci(int n);

int main(void){
    // Initialise variables
    int n = 1;
    long sum = 0;

    // Find all F(n) < 4,000,000 and if even add to sum
    for (; ;){
        long fibnum = fibonacci(n); 
        if(fibnum % 2 == 0){
            sum = sum + fibnum;
        }
        if(fibnum >= 4000000){
            printf("Sum of even Fibonacci numbers below 4M is %li\n", sum);
            break;
        }
        n++;
    }

    return 0;
}

// Function to find Fibonacci number, F(n)
long fibonacci(int n){
    if (n < 3)
        return 1; // F(1) = F(2) = 1
    else
        return (fibonacci(n-1) + fibonacci(n-2));
}
