#include <stdio.h>
#include <stdlib.h>


/*
Question:
---------------

Consider the cuboid below. Write a C Program to calculate its total surface area.

NB:
1. The total surface area should be rounded to 2 decimal places.
2. Your code should contain a block comment indicating your name, index number, reference number, program of study, the date and the task.
3. Add in-line comments where necessary.

An example of the code output should be:
The total surface area of the cuboid is 13.45 square centimeter.


*/

int main()
{
    double w = 10.5, l = 20, h = 19.5;
    // Equation: 2 (lw + wh + lh)
    printf("The total surface area of the cuboid is %.2f square meters", 2 * ( (l * w) + ( w * h) + (l * h) ));
    return 0;
}
