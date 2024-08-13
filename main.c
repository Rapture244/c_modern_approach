/* Write a program that ask a 3-digit number, then prints the number with its digit reversed
 *
 * HINT: If n is an integer, the n % 10 is the last digit in n
 * HINT: and n /10 is n with the last digit removed
 */

#include <stdio.h>

int main(void)
{
    int number, hundreds, tens, units;

    printf("Enter a 3-digit number: ");
    scanf("%d", &number);

    units = (number % 10);          // get the last digit
    tens = (number % 100) / 10;     // get the middle digit
    hundreds = (number / 100);      // get the first digit


    printf("The reversal is: %d%d%d", units, tens, hundreds);


    return 0;
}
