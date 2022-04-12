#include <stdio.h>
#include <stdlib.h>

/*
Question:
----------

Write a program to calculate the semester weighted average (SWA) of 6 courses taken by a student in KNUST.

Specification:
Ask the user to input the scores for the courses.
Ask the user to input the credit hours for each course provided in (1).
Calculate the SWA (2 d.p.) and provide a feedback to the user.

*/


int main()
{
    int m1, m2, m3, m4, m5, m6, c1, c2, c3, c4, c5, c6;
    printf("Enter marks for the 6 courses: ");
    scanf("%d %d %d %d %d %d", &m1, &m2, &m3, &m4, &m5, &m6);

    printf("Enter the credit hours for the 6 courses: ");
    scanf("%d %d %d %d %d %d", &c1, &c2, &c3, &c4, &c5, &c6);

    double swa = ((m1 * c1) + (m2 * c2) + (m3 * c3) + (m4 * c4) + (m5 * c5) + (m6 * c6))/(c1 + c2 + c3 + c4 + c5 + c6);
    printf("The SWA is %.2f", swa);
    return 0;
}
