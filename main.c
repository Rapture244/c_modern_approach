/* Write a program that ask a two-digit number, then prints the number with its digit reversed
 *
 * HINT: If n is an integer, the n % 10 is the last digit in n
 * HINT: and n /10 is n with the last digit removed
 */

#include <stdio.h>

int main(void)
{
    int n, n_1, n_2;

    printf("Enter a 2-digit number: ");
    scanf("%d", &n);

    n_1 = n /10;
    n_2 = n % 10;

    printf("The reversal is: %d%d", n_2, n_1);


    return 0;
}
