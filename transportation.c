/*
Calculating the cost of trasportation cost during the trip
    -rental car
    -private car
    -taxi 
    -company covered taxi 
*/
#include "functions.h"

double privateVehicle(bool privCar)
{   
    if(privCar) //private car was used 
    {
        double milesDriven =0.0; 
        printf("How many miles have you driven in total?");
        scanf("%f", &milesDriven); 
        return milesDriven*0.27;
    }
    else //private car was not used 
    {
        return 0; 
    }

}

double carRental(int days, bool rented, double pricePerDay)
{
    if(rented) //car was rented 
    {
        return days*pricePerDay; 
    }
    else //car was not rented 
    {
        return 0; //no car rental price 
    }
}

double taxiCost()
{
    double totalTaxiCost =0; 
    //ask the user to input total taxi cost 
    printf("\nHow much did you spend on taxi during your trip?");
    scanf("%f", &totalTaxiCost); //save it 
    //return the result 
    return totalTaxiCost; 
}
//taxi cost covered by the company 
double taxiCostCoveredByCompany(int days)
{
    return days*10; 
}
