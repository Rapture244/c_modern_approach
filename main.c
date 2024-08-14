/* Write a program that finds the largest in a series of numbers entered by the user
 *
 * For now, u need to ask the user for 6 numbers
 * The program must prompt the user to enters numbers one by one.
 * When he enters a 0 or negative number, the program must displays the largest non-negative numbers entered.
 *
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    int i = 6;
    float number, largest_num = 0;


    while (i > 0)
    {
        printf("Enter a strictly positive number: ");
        scanf("%f", &number);

        if (number <= 0)              // Stop asking for numbers if a non-positive number is entered
            break;

        if (number > largest_num)     // Update largest number if the current number is larger
            largest_num = number;

        i -= 1;                      // Decrease the counter
    }

    printf("\nThe largest number entered was: %.2f", largest_num);

    return 0;
}
