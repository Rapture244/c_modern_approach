/* Write a program that calculates the remaining balance on a loan after the 1st, 2nd, 3rd montly payment
 *
 * Display each balance with two digits after the decimal point
 *
 * HINT: Each month, the balance is decreased by the amount of the payment but increased by the balances times the montlhy interest rate.
 * HINT: To find the monthly interest rate, convert the interest rate entered by the user to a % and divide it by 12
 */

#include <stdio.h>

int main(void)
{
    float balance, interest_rate, montlhy_payment, montly_interest, balance_1, balance_2, balance_3;

    printf("Enter amount of loan: ");
    scanf("%f", &balance);

    printf("Enter interest rate: ");
    scanf("%f", &interest_rate);

    printf("Enter monthly payment: ");
    scanf("%f", &montlhy_payment);

    // Convert annual interest rate to monthly interest rate
    montly_interest = (interest_rate / 12) / 100;

    balance_1 = balance +(balance * montly_interest) - montlhy_payment;
    balance_2 = balance_1 +(balance_1 * montly_interest) - montlhy_payment;
    balance_3 = balance_2 +(balance_2 * montly_interest) - montlhy_payment;

    printf("\nBalance remaining after 1st payment: %.2f", balance_1);
    printf("\nBalance remaining after 2nd payment: %.2f", balance_2);
    printf("\nBalance remaining after 3rd payment: %.2f", balance_3);


    /*
    // CHATGPT UPGRADE -> but i haven't seen loops inside the book yet
    // Calculate and display the balance after each of the first three payments
    for (month = 1; month <= 3; month++) {
        balance = balance + (balance * monthly_interest) - monthly_payment;
        printf("Balance remaining after month %d: %.2f\n", month, balance);
    */

    return 0;
}
