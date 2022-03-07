/*
Calculating the cost of trasportation cost during the trip
    -rental car
    -private car
    -taxi 
    -company covered taxi 
*/
#include "functions.h"

double privateVehicle()
{   
    double milesDriven =0.0; 
        
    printf("How many miles have you driven in total?");
    scanf("%lf", &milesDriven); 
    //input validaiton loop 
    while(milesDriven <0)
    {
        printf("\nWrong Input!!!\nHow many miles have you driven in total?");
        scanf("%f", &milesDriven); 
    }
    return milesDriven*0.27;
}

double carRental(int days, double pricePerDay)
{
    return days*pricePerDay; 
}

double taxiCost()
{
    double totalTaxiCost =0; 
    //ask the user to input total taxi cost 
    printf("\nHow much did you spend on taxi during your trip?");
    scanf("%lf", &totalTaxiCost); //save it 
    //input validation loop 
    while(totalTaxiCost <0)
    {
        printf("\nWrong Input!!!\nHow much did you spend on taxi during your trip?");
        scanf("%lf", &totalTaxiCost); //save it 
    }
    //return the result 
    return totalTaxiCost; 
}
//taxi cost covered by the company 
double taxiCostCoveredByCompany(int days)
{
    return days*10; 
}
