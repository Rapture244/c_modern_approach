/* Write a program that prompts user to enter a phone number in the form (xxx) xxx-xxxx and display it as xxx.xxx.xxxx
 *
 * Ex: (404) 817-6900
 */

#include <stdio.h>

int main(void)
{
    int parenthese, digit_3, digit_4;

    printf("Enter phone number [(xxx) xxx-xxxx]: ");
    scanf("(%d) %d-%d", &parenthese, &digit_3, &digit_4);

    printf("\nYou entered: %d.%d.%d\n", parenthese, digit_3, digit_4);

    return 0;
}
