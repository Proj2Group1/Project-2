#include <stdio.h>
#include "functions.h"

//cost of entire airfare
double airfareCost() {

    double total_airfareCost;
   
        printf("Enter the amount of any round-trip airfare: \n");
        scanf("%lf" , &total_airfareCost);

    while (total_airfareCost < 0) {
        printf("Error: Cannot enter a negative amount. \n");
    }
    
    return total_airfareCost;

}
