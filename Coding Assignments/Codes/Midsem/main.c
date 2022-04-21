#include <stdio.h>
#define discount 0.1
#define eggPrice 1.2
double calculateFoodPrice(double gariBeans, double ripePlantain, double plainRice);

int main(){
  double mon = 600 * calculateFoodPrice(2, 1, 2);
  double tues = 610 * calculateFoodPrice(3, 2, 2);
  double wed = 580 * calculateFoodPrice(2.5, 2, 1.5);
  double thurs = 600 * calculateFoodPrice(1.5, 2, 1.5);
  double fri = 670 * calculateFoodPrice(2, 2, 2);
  double total = mon + tues + wed + thurs + fri;

  printf("Monday: \t\t%.2f\n", mon);
  printf("Tuesday: \t\t%.2f\n", tues);
  printf("Wednesday: \t\t%.2f\n", wed);
  printf("Thursday: \t\t%.2f\n", thurs);
  printf("Friday: \t\t%.2f\n", fri);
  printf("********************************\n");
  printf("Total Sales(GHC):\t%.2f\n", total);
  printf("********************************\n");
  return 0;
}


double calculateFoodPrice(double gariBeans, double ripePlantain, double plainRice)
{

  return (gariBeans + ripePlantain + plainRice + eggPrice) * ( 1 - discount);
}
