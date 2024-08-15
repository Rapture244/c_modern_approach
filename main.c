/* Write a program that asks the user to enter a fraction, then reduces the fraction to its lowest components
 *
 * HINT: To do so, 1st compute the GCD of the numerator and denominator. Then divide both the numerator and denominator by the GCD
 *
 * The classic GCD algo, known as Euclid's algorithm goes as follows:
 *
 * HINT: Let m and n be our variables
 * - if n is 0, then stop, m contains the GCD
 * - otherwise, compute the remainder when m is divided by n.
 * - Copy n into m and copy the remainder into n
 * - then repeat the process, starting with testing whether n is 0
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int denominator, numerator, gdc;


    // Input validation loop
    do
    {
        printf("Enter a fraction (xx/xx): ");
        scanf("%d/%d", &numerator, &denominator);

        if (numerator == 0 || denominator == 0)
        {
            printf("Both numbers cannot be zeros. Please try again.\n");
        }
    } while (numerator == 0 || denominator == 0);

    int m = numerator;
    int n = denominator;

    // GCD calculation
    while (n != 0)
    {
        int remainder = m % n;

        m = n;
        n = remainder;
    }
        printf("Greatest Common Divisor: %d\n", gdc = m);

    // Lowest terms calculations
    numerator = numerator / gdc;
    denominator = denominator / gdc;

    printf("\nThe fraction's lowest terms: %d/%d\n", numerator, denominator);


    return 0;
}
