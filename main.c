#include "functions.h"

int main(void)
{
    int choice =0; 
    int totalNumOfDays =0; 
    int departureTime[2] = {0,0};
    int arrivalTime[2] = {0,0};
    bool carRented = false; 
    double priceCarRent = 0.0; 
    bool privCarUsed = false; 
    char taxiWasUsed;  
    double hotelCost =0.0; 
    double hotelCostByCompany =0.0; 
    double parkingCost =0.0;
    double parkingCostComp =0.0;
    int daysParked =0; 
    double airfareFee =0; 
    double conference =0; 
    double totalCostOfFood =0.0; 
    int numOfBreakfast =0;
    int numOfLunch =0;
    int numOfDinner =0; 
    double companyCovFood =0;
    double totalExpenses = 0;
    double companyCovExpenses =0; 
    int taxiDays =0; 
    double taxi =0;
    double companyCovTaxi  =0; 
    double totalRentPrice =0;
    double privateVehicleCost =0;
    double reimbursement =0.0;
    double moneySaved =0.0; 
    double breakfast =0;
    double lunch =0;
    double dinner;

    printf("Hello, this program calculates and displays the total expenses during a trip.");
    
    do
    {
        fflush(stdin);
        printf("\nWould you like to use this program:\nPress 1 if yes\nPress 2 to quit the program\n");
        scanf("%d", &choice);
        
        if(choice ==1)
        {
            //get all user inputs 
            totalNumOfDays = getTotalDays(); 
            getDepartureTime(departureTime);
            getArrivalTime(arrivalTime);
            carRented = rentedCar(); 
            priceCarRent = getPriceCarRentals(carRented); 
            privCarUsed = privateCar(); 

            //if car was rented or private car used 
            if(carRented)
            {
                totalRentPrice = carRental(totalNumOfDays, priceCarRent); 
            }
            else if(privCarUsed)
            {
                privateVehicleCost = privateVehicle(); 
            }
            fflush(stdin);
            
            //ask if taxi was used 
            printf("Did you use taxi during your trip?");
            scanf("%c", &taxiWasUsed); 
            while(taxiWasUsed !='Y' && taxiWasUsed !='y' && taxiWasUsed !='N' && taxiWasUsed !='n')
            {
                //ask if taxi was used 
                printf("\nWrong Input!!!\nDid you use taxi during your trip?");
                 scanf("%c", &taxiWasUsed);
            }
            //taxi was used 
            if(taxiWasUsed == 'Y' || taxiWasUsed == 'y')
            {
                int taxiDays =0; 
                printf("\nHow many days did you take taxi? ");
                scanf("%d", &taxiDays);
                while(taxiDays <0 || taxiDays > totalNumOfDays)
                {
                    printf("\nWrong Input!!\nHow many days did you take taxi? ");
                    scanf("%d", &taxiDays);
                }
                taxi = taxiCost(); 
                companyCovTaxi = taxiCostCoveredByCompany(taxiDays); 
            }
            //HOTEL COST
            hotelCost = totalHotelCost(totalNumOfDays); 
            hotelCostByCompany = hotelCostCompanyCovered(totalNumOfDays); 
            
            //PARKING COST 
            printf("\nHow many days did you park?"); 
            scanf("%d", &daysParked); 
            while(daysParked <0 || daysParked > totalNumOfDays)
            {
                printf("\nWrong Input!!\nHow many days did you park?"); 
                scanf("%d", &daysParked); 
            }
            parkingCost = parkingFee();
            parkingCostComp = companyCoveredParkingFee(daysParked); 

            //AIRFARE 
            airfareFee = airfareCost(); 

            //CONFERENCE FEE
            conference = conferenceFee(); 
            
            //FOOD COST
            fflush(stdin);
            breakfast = breakfastCost();
            fflush(stdin);
            lunch = lunchCost();
            fflush(stdin);
            dinner = dinnerCost();
            totalCostOfFood = + lunchCost() + dinnerCost(); 
            
            // # of meals covered 
            numOfBreakfast = countBreakfast(departureTime, arrivalTime, totalNumOfDays); 
            numOfLunch = countLunch(departureTime, arrivalTime, totalNumOfDays); 
            numOfDinner = countDinner(departureTime, arrivalTime, totalNumOfDays); 
            companyCovFood = companyCoveredFood(departureTime, arrivalTime, totalNumOfDays); 
            
            //TOTAL EXPENSES 
            totalExpenses = totalCostOfFood + airfareFee + conference + parkingCost + hotelCost + taxi + privateVehicleCost + totalRentPrice;
            companyCovExpenses = companyCovFood + parkingCostComp + hotelCostByCompany + companyCovTaxi;
            if(totalExpenses > companyCovExpenses)
            {
                moneySaved =0; 
                reimbursement = totalExpenses = companyCovExpenses; 
            } 
            else if(totalExpenses < companyCovExpenses)
            {
                moneySaved = companyCovExpenses - totalExpenses; 
                reimbursement =0; 
            }
            else
            {
                moneySaved =0;
                reimbursement =0;
            }
            
            //DISPLAY INFORMATION
            printf("\nThe total expenses incurred by the businessperson: %.2lf", totalExpenses);
            printf("\nThe total allowable expenses for the trip, %.2lf", companyCovExpenses); 
            printf("\n\nTotal money saved is: %.2lf", moneySaved);
            printf("\nTotal reimbursement is: %.2lf", reimbursement);
        }
        else if(choice ==2)
        {
            printf("\nThank you for choosing our program."); 
        }
        else
        {
            printf("Wrong Input!!"); 
        }
    }while(choice !=2);
}
