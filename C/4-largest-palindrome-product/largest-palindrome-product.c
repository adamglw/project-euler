/* A palindromic number reads the same both ways. The largest palindrome made
 * from the product of two 2-digit numbers is 9009 = 91 x 99.
 *
 * Find the largest palindrome made from the product of two 3-digit numbers.
 */
#include<stdio.h>
#include<stdbool.h>

bool ispalindrome(int n);

int main(void){
    int upper = 999;
    int lower = upper + 1 - ((upper + 1) / 10);

    for (int i = upper; i >= lower; i--){
        for(int j = upper; j >= lower; j--){
            int n = i * j;
            if(ispalindrome(n) == 1){
                printf("Palindrome of %i x %i is %i\n", i, j, n);
                goto end;
            }
        }
    }
    printf("No palindrome found\n");

    end: 
    return 0;
}

// Function to check if n is a palindrome
bool ispalindrome(int n){
    int copyn = n;
    int currentdigit, reversedn = 0;
    // Reverse number n
    do
    {
        currentdigit = copyn % 10; // Remainder is last digit of n
        reversedn = (reversedn * 10) + currentdigit; // Last digit is now first
        copyn = copyn / 10;
    }
    while (copyn != 0);

    if (reversedn == n){
        return true;
    }
    return false;
}

