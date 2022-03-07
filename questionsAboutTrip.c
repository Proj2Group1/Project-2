#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "functions.h"

/* Asks the user for the total num of days on trip. 
    returns the int number days */
int getTotalDays(){
    int totalDays;
    printf("How many days was your trip?");
    scanf("%d", &totalDays);
    return totalDays;
}

/* Asks user for departure time.
    returns time as int & in military time. */
void getDepartureTime(int departureTime[]){
    const int MAX = 2;
    int counter;
    printf("Enter your departure time in 24-hour (military) format:\n"
           "Hit enter to separate the hour and minutes.\n"
           "Example input:\n"
           "20\n00"); 
    for(counter = 0; counter<MAX; counter++){
        scanf("%d", &departureTime[counter]);
    }
    /* if want to print out the input: 
    printf("&d:&d", (*ptr)[0],(*ptr)[1]); */
}

/* Asks user for arrival time.
    returns time as int & in military time. */
void getArrivalTime(int arrivalTime[]){
    // military time
    const int MAX = 2;
    int counter;
    printf("Enter your arrival time in 24-hour (military) format:\n"
           "Hit enter to separate the hour and minutes.\n"
           "Example input:\n"
           "7\n00");
    for(counter = 0; counter<MAX; counter++){
        scanf("%d", &arrivalTime[counter]);
    }
}

/* Asks the user if they rented a car.
    returns true or false */
bool rentedCar(){
    int temp;
    printf("Did you rent a car during your trip? 1 is true and 0 is false: ");
    scanf("%d", &temp);
    while(temp < 0 || temp > 1){
        printf("Invalid. Enter 1 if true or 0 if false: ");
        scanf("%d", &temp);
    }
    if (temp == 1){
        return true;
    }
    else return false;
}

/* Passes one arg if car was rented or !rented.
    if user rented, prompt how much the rental price was. 
    else return false.
    this will return the rent price as a double.  */
double getPriceCarRentals(bool rented){
    double price;
    if (rented){
        printf("Please enter your rental price per day: ");
        scanf("%lf", &price);
        return price;
    }
    else return 0;
}

/* Asks the user if they used a private car instead. 
    returns true or false. */
bool privateCar(){
    int temp;
    printf("Did you use a private car during your trip? 1 is true and 0 is false: ");
    scanf("%d", &temp);
    if(temp == 1){
        return true;
    }
    else return false;
}
