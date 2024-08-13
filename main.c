/* Write a program that reads an integer and displays it in octal (base 8)
 *
 * The output should be displayed using 5 digits, even if fewer digits are sufficient
 *
 * HINT: to convert the number to octal:
 * - Divide the number by 8 and keep track of the quotientt and remainder.
 * - Continue dividing the quotientt by 8 until the quotientt is 0.
 * The octal number will be the sequence of remainders read from bottom to top.
 *
 * (printf is capable of displaying a number in base 8, as we'll see in chapter 7, so there's is actually an easier way to write this program.)
 *
 *
 * Ex: 1953
 * 1953 / 8 = 244 with a remainder of 1
 * 244 / 8 = 30 with a remainder of 4
 * 30 / 8  = 3 with a remainder of 6
 * 3 / 8 = 0 with a remainder of 3
 *
 * Now, read the remainder from bottom to top : 3641
 *
 * So 1953 in octal is 3641
 */

#include <stdio.h>

int main(void)
{
    int number, digit_1, quotient, digit_2, digit_3, digit_4, digit_5;

    printf("Enter a number between 0 and 32 767: ");
    scanf("%d", &number);

    digit_1 = number % 8;
    quotient = number / 8;

    digit_2 = quotient % 8;
    quotient /= 8;

    digit_3 = quotient % 8;
    quotient /= 8;

    digit_4 = quotient % 8;
    quotient /= 8;

    digit_5 = quotient % 8;

    // my logical solution but the exercice says to put the 1st remainder last so lets follow it even tho i'm right
    //printf("In octal, you rnumber is: %05d%d%d%d%d", digit_1, digit_2, digit_3, digit_4, digit_5);

    // Display the number in octal, ensuring 5 digits are shown
    printf("In octal, you rnumber is: %d%d%d%d%d\n", digit_5, digit_4, digit_3, digit_2, digit_1);

    return 0;
}
