/* If we list all the natural numbers below 10 that are multiples of 3 of 5,
 * we get 3, 5, 6, 9. The sum of these multiples is 23.
 *
 * Find the sum of all the multiples of 3 or 5 below 1000.
 */
#include <stdio.h>

int gausssum(int m, int n);

int main(void) {
    int sum = gausssum(3, 1000) + gausssum(5, 1000);
    printf("The sum of all multiples of 3 or 5 below 1000 is %i \n", sum);
    
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
