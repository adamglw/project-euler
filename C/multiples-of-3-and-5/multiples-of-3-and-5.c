/* If we list all the natural numbers below 10 that are multiples of 3 of 5,
 * we get 3, 5, 6, 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */
#include <stdio.h>

int gausssum(int m, int n);

int main(void) {
    int sum3 = gausssum(3, 1000); // Find sum of multiples of 3 below 1000
    int sum5 = gausssum(5, 1000); // Find sum of multiples of 5 below 1000
    int total = sum3 + sum5; // Calculate sum of multiples of 3 and 5

    printf("The sum of all multiples of 3 or 5 below 1000 is %i \n", total);
    
    return 0;
}

// Gauss Sum function to find sum of multiples of m below n
int gausssum(int m, int n){

    // Find largest multiple of m within n
    for(int i = n; i <= n; i--)
        if(i % m == 0){
            n = i;
            break;
        }

    // Gauss Sum = m * x * ((x + 1) / 2), where x = n / m 
    int x = n / m;
    int sum = m * x * ((x + 1) / 2);
    return sum;
}
