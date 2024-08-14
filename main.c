/* Write a program that ask the user his income and give back the tax amount
*
 * Income               Amounf of tax
 * Not over $750        1% of income
 * 750-2 2250           $7.50 + 2% of the amount
 * 2 250-3 750          $37.50 + 3% of the amount
 * 3 750-5 250          $82.50 + 4%
 * 5 250-7 000          $142.50 + 5%
 * Over 7 000           $230 + 6%
 *
 */

#include <stdio.h>
#include <stdbool.h>

int main(void)
{
    float income, tax;

    printf("Enter your income : $");
    scanf("%f", &income);

    if (income < 750)
        tax = income * 0.01;
    else if (income < 2250)
        tax = 7.50 + income * 0.02;
    else if (income < 3750)
        tax = 37.50 + income * 0.03;
    else if (income < 5250)
        tax = 82.50 + income * 0.04;
    else if (income < 7000)
        tax = 142.50 + income * 0.05;
    else if (income > 7000)
        tax = 230 + income * 0.06;

    printf("Your tax amount: %.2f", tax);

    return 0;
}
