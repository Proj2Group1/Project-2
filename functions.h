#ifndef FUNCTIONS_H
#define FUNCTIONS_H

#include<stdio.h>
#include<stdbool.h>

//no parameter required 
//asks the user the total number of days on trip
//returns the number days entered by the user 
int getTotalDays();

//no parameter required 
//asks the user the departure time 
//returns the time of the departure as an int pointer  
void getDepartueTime(int departureTime[]);

//no parameter required 
//asks the user the arrival time 
//returns the time of the arrival as an int pointer 
void getArrivalTime(int arrivalTime[]);

//no parameter required 
//ask the the user if they rented car
//return bool (true or false)
bool rentedCar();

//1 paramter: car rented or not as bool
//if the user rented car then ask the user the car rental price per day 
//else (not rented a car) do not ask the user to enter rental car price and return 0
//returns the rent price of a car as double  (if car was rented)
double getPriceCarRentals(bool rented);

//no parameter required 
// ask the user if they used private car 
//return true or false 
bool privateCar(); 

//no parameter
//if yes: ask the user number of miles driven and calculate the cost of driving it 
// if no: return 0 
//calculates and returns the total money cost of driving private vehicle based on milage 
double privateVehicle(); 

//1 parameter: number of days the car was rented, price of car rental per day 
//if car was rented: calculate the cost of car rental 
//if not rented: return 0  
//returns the total money cost of renting car 
double carRental(int days, double pricePerDay); 

//no parameter required 
// returns the cost of taxi for the entire trip
double taxiCost(); 

//1 parameter: number of trip days 
//calculates and returns how much the company will cover taxi cost 
double taxiCostCoveredByCompany(int days); 

//no parameter required 
//returns the total cost of having breakfast
double breakfastCost();

//no parameter required 
//returns the total cost of having breakfast
double lunchCost();

//no parameter required 
//returns the total cost of having breakfast
double dinnerCost();

//3 parameter: number of days of trip, deprature time, arrival time
//calculates and returns the number of breakfast meals covered by the company 
int countBreakfast(int departureTime[], int arrivalTime[], int days);

//3 parameter: number of days of trip, deprature time, arrival time
//calculates and returns the number of lunch meals covered by the company 
int countLunch(int departureTime[], int arrivalTime[], int days);

//3 parameter: number of days of trip, deprature time, arrival time
//calculates and returns the number of dinner meals covered by the company 
int countDinner(int departureTime[], int arrivalTime[], int days);

//3 parameter: numebr of breakfast, number of lunch, number of dinner 
//calculates and returns the total amount of meal cost covered by the company 
int companyCoveredFood(int departureTime[], int arrivalTime[], int days);

//no parameter required
//return the total parking cost during the trip 
double parkingFee();  

//nor parameter required 
//return the company covered cost for parking 
double companyCoveredParkingFee(int days);

//no parameter required 
//returns total money value of Conference Fees
double conferenceFee();

//1 parameter: total number of days 
//subtract one from the days to get total # of nights stayed at hotel and calculate total hotel cost 
//return hotel cost 
double totalHotelCost(int days);

//1 parameter: total number of days 
//calculate and return hotel cost covered by the company 
double hotelCostCompanyCovered(int days);

//no parameter required 
//returns the airfare cost 
double airfareCost();

#endif
