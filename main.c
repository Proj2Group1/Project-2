#include "functions.h"

int main()
{
    int choice =0; 
    int totalNumOfDays =0; 
    int* departureTime = NULL;
    int* arrivalTime = NULL;
    bool carRented = false; 
    double priceCarRent = 0.0; 
    bool privCarUsed = false; 
    char taxiWasUsed;  

    printf("Hello, this program calculates and displays the total expenses during a trip.");
    printf("Would you like to use this program:\nPress 1 if yes\nPress 2 to quit the program\n");
    while(choice!=2)
    {
        printf("\nWould you like to calculate the expenses of another trip?\nPress 1 for yes\nPress 2 for no"); 
        
        if(choice ==1)
        {
            //get all user inputs 
            totalNumOfDays = getTotalDays(); 
            departureTime = getDepartueTime();
            arrivalTime = getArrivalTime();
            carRented = rentedCar(); 
            priceCarRent = getPriceCarRentals(carRented); 
            privCarUsed = privateCar(); 

            //if car was rented or private car used 
            if(carRented)
            {
                double totalRentPrice = carRental(totalNumOfDays, priceCarRent); 
            }
            else if(privCarUsed)
            {
                double privateVehicleCost = privateVehicle(); 
            }
            //ask if taxi was used 
            printf("Did you use taxi during your trip?");
            scand("%c", &taxiWasUsed); 
            while(taxiWasUsed !='Y' && taxiWasUsed !='y' && taxiWasUsed !='N' && taxiWasUsed !='n')
            {
                //ask if taxi was used 
                printf("\nWrong Input!!!\nDid you use taxi during your trip?");
                 scand("%c", &taxiWasUsed);
            }
            //taxi was used 
            if(taxiWasUsed == 'Y' || taxiWasUsed == 'n')
            {
                int taxiDays =0; 
                printf("\nHow many days did you take taxi? ");
                scanf("%d", &taxiDays);
                while(taxiDays <0)
                {
                    printf("\nWrong Input!!\nHow many days did you take taxi? ");
                    scanf("%d", &taxiDays);
                }
                double taxi = taxiCost(); 
                double companyCovTaxi = taxiCostCoveredByCompany(taxiDays); 
            }
            
        }
        else if(choice ==2)
        {
            printf("\nThank you for choosing our program."); 
        }
        else
        {
            printf("Wrong Input!!"); 
        }
    }
}