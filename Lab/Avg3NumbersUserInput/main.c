#include <stdio.h>
#include <stdlib.h>

int main()
{
    int number1, number2, number3;
    printf("Enter 3 Numbers: ");
    scanf("%d %d %d", &number1, &number2, &number3);

    double avg = (number1 + number2 + number3)/3.0;

    printf("The average of %d, %d and %d is %f\n", number1, number2, number3, avg);

    return 0;
}
