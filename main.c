/* Write a program that asks the user to enter a dollar-and-cents amount and then displays the amount with 5% tax added
 *
 *Enter amount: 100.00
 *With tax added: 105.00
 *
 */

#include <stdio.h>

#define tax 0.05

int main(void)
{
    float amount, amount_plus_tax;

    printf("Enter amount: ");
    scanf("%f", &amount);

    amount_plus_tax = amount + (amount * tax);

    printf("\ntax added: %.2f\n", amount_plus_tax);

    return 0;
}
