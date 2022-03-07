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
double companyCoveredParkingFee (int days) {

    double total_companyCoveredParkingFee;

    do
    {
        total_companyCoveredParkingFee = (6 * days);

    } while (total_companyCoveredParkingFee < 0);

    return total_companyCoveredParkingFee;
}
