#include <stdio.h>
#include <stdlib.h>
#define BOWL_OF_RICE 2.0
#define CHICKEN 3.0
double newPrice(double oldPrice);


int main()
{
    double bRice, chkn, totalPrice;

    bRice = newPrice(BOWL_OF_RICE);
    printf("Bowl of Rice: \t%.2f\n", bRice);

    chkn = newPrice(CHICKEN);
    printf("Chicken: \t%.2f\n", chkn);

    totalPrice = bRice + chkn;
    printf("**********************\n");
    printf("Total Price: \t%.2f\n", totalPrice);
    printf("**********************\n");
    return 0;
}


double newPrice(double oldPrice)
{
    return (oldPrice * 5) + 2;
}
