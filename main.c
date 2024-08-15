/* Write a program that display the greatest common divisor (GCD) between two integers
 *
 * The classic GCD algo, known as Euclid's algorithm goes as follow:
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
    int m, n;


    // Input validation loop
    do
    {
        printf("Enter two integers (xx xx): ");
        scanf("%d/%d", &m, &n);

        if (m == 0 || n == 0)
        {
            printf("Both numbers cannot be zeros. Please try again.\n");
        }
    } while (m == 0 || n == 0);


    // GCD calculation
    while (n != 0)
    {
        int remainder = m % n;
        m = n;
        n = remainder;
    }
        printf("\nGreatest Common Divisor: %d", m);


    return 0;
}
