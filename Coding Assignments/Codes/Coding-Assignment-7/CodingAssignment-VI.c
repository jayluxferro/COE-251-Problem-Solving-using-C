//
//  Coding Assignment - VI
//  
//
//  Created by Jay on 23/04/2022.
//

#include <stdio.h>
const double WATERMELON = 4;
const double PINEAPPLE = 5;
const double ORANGE = 1;
const double GRAPES = 7;

int main(){
    int qtyWM, qtyPine, qtyOrange, qtyGrapes;
    double discount = 0;
    
    printf("****************************\n");
    printf("Quantity of Watermelon: ");
    scanf("%d", &qtyWM);
    
    printf("Quantity of Pineapple: ");
    scanf("%d", &qtyPine);
    
    printf("Quantity of Orange: ");
    scanf("%d", &qtyOrange);
    
    printf("Quantity of Grapes: ");
    scanf("%d", &qtyGrapes);
    printf("****************************\n");
    
    int qtyItems = qtyWM + qtyPine + qtyOrange + qtyGrapes;
    if (qtyItems <= 2)
    {
        discount = 0;
    }
    else if (qtyItems > 2 && qtyItems <= 5)
    {
        discount = 2;
    }
    else if (qtyItems > 5 && qtyItems <= 10)
    {
        discount = 5;
    }
    else {
        discount = 10;
    }
    
    double total = (WATERMELON * qtyWM) + (PINEAPPLE * qtyPine) + (ORANGE * qtyOrange) + (GRAPES * qtyGrapes);
    
    double _discount = (discount/100) * total;
    double amountPayable = total - _discount;
    printf("Total Amt. (GHC): %.2f\n", total);
    printf("Discount. (GHC): %.2f\n", _discount);
    printf("Amount Payable. (GHC): %.2f\n", amountPayable);
    printf("****************************\n");
    return 0;
}
