#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a = 1;

   int input;
   printf("Times Table\n");
   printf("Enter a number: ");
   scanf("%d", &input);


   while (a <= 12)
   {
        printf("%d x %d = \t%d\n", input, a, (input * a));

        a += 1;
   }

}
