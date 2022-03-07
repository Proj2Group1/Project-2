#include <stdio.h>
#include "functions.h"

//amount spent on parking fees
double parkingFee() {

    double total_parkingFee;

    do
    {
        printf("How much was your total parking fees?: \n");
        scanf("%lf", &total_parkingFee);

    } while (total_parkingFee < 0);

    return total_parkingFee;
}

//company only covers $6 of parking fees
double CompanyCoveredParkingFee (int days) {

    double total_CompanyCoveredParkingFee;

    do
    {
        total_CompanyCoveredParkingFee = (6 * days);

    } while (total_CompanyCoveredParkingFee < 0);

    return total_CompanyCoveredParkingFee;
}
