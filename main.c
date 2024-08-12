/* Write a program that asks the user to enter a U.S dollar amount and show how to pay that amount using the smallest $20, $10, $5, $1
 *
 * HINT -> Divide the amount by 20 to determine the number of $20 bills needed, and then reduce the amount by the total value of the $20 bills. repeat for thr other bills.
 * HINT -> Be sure to use integer values throughout, not float
 *
 */

#include <stdio.h>

int main(void)
{
    int amount, dollar_20, dollar_10, dollar_5, dollar_1;

    printf("Enter a dollar amount: ");
    scanf("%d", &amount);

    // Calculate the number of $20 bills
    dollar_20 = amount / 20;
    amount = amount % 20;  // Get the remainder after $20 bills

    // Calculate the number of $10 bills
    dollar_10 = amount / 10;
    amount = amount % 10;  // Get the remainder after $10 bills

    // Calculate the number of $5 bills
    dollar_5 = amount / 5;
    amount = amount % 5;   // Get the remainder after $5 bills

    // The remaining amount will be the number of $1 bills
    dollar_1 = amount;

    // Print the results
    printf("\n$20 bills: %d", dollar_20);
    printf("\n$10 bills: %d", dollar_10);
    printf("\n$5 bills: %d", dollar_5);
    printf("\n$1 bills: %d\n", dollar_1);

    return 0;
}
