#include <stdio.h>
#include "functions.h"

//amount spent on hotel
double totalHotelCost (int days) {

    double total_HotelCost;
    double cost;

    printf("How much was the hotel per night?: \n");
    scanf("%lf", &cost);

    total_HotelCost = (cost * (days - 1));

    return total_HotelCost;
}

//company only covers $90
double hotelCostCompanyCovered (int days) {

    double total_CostCompanyCovered;

        total_CostCompanyCovered = (90 * (days - 1));

    return total_CostCompanyCovered;
}
