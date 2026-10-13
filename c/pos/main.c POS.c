/*
   project: point of sale system
   description: take the prices
                and quantities of two items
                and amount tendered and output
                change in denominations
   author: hassan mukwati
   date: 6/10/2026
*/
#include <stdio.h>
#include <stdlib.h>

int main()
{
    //declare variables
    int price, price2, qty1, qty2, change,
    total_amount, amount_tendered, five_hundreds, two_hundreds,
    one_hundreds,fifties,shillings,remainder;
    printf("welcome to champions POS!\n");\

    //compute inputs
    printf("enter the price followed by quantity of: item 1:\n item 1: ");
    scanf("%d&d", &price, &qty1);
    printf("item 2: ");
    scanf("%d&d", &price2, &qty2);

    //perform computations
    total_amount = price + price2 * qty2;
    printf("total amount due: %d", total_amount);
    printf("enter total amount tendered : ");
    scanf("%d", amount_tendered);
    change = amount_tendered - total_amount;
    printf("change due: %d", change);
    five_hundreds = change / 500;
    remainder = change % 500;
    two_hundreds = remainder / 200;
    remainder = remainder % 200;
    one_hundreds = remainder / 100;
    remainder = remainder % 100;
    fifties = remainder / 50;
    shillings = remainder % 50;

    printf("change in denomination\n");
    printf("five hundreds: %d\n", five_hundreds);
    printf("two hundreds: %d\n", two_hundreds);
    printf("one hundreds: %d\n", one_hundreds);
    printf("fifties: %d\n", fifties);
    printf("shillings: %d\n", shillings);
    printf("thank you! bye \n");
    return 0;
}
