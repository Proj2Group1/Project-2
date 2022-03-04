#include <stdio.h>
#include <stdlib.h>
#include <math.h>
//#include "functions.h"

/*
On the first day of the trip, breakfast is allowed as an expense if the time of departure is before 7 a.m. 
Lunch is allowed if the time of departure is before 12 noon. 
Dinner is allowed on the first day if the time of departure is before 6 p.m. 
On the last day of the trip, breakfast is allowed if the time of arrival is after 8 a.m. 
Lunch is allowed if the time of arrival is after 1 p.m. 
Dinner is allowed on the last day if the time of arrival is after 7 p.m. 

The program should only ask for the amounts of allowable meals. 
(The company allows up to $9 for breakfast, $12 for lunch, and $16 for dinner. Anything more than this must be paid by the employee.) 
*/

double breakfastCost(){
    double total_breakfast;
    printf("Please enter your trip's total breakfast cost:");
    scanf("%lf", &total_breakfast);

    return total_breakfast;

}

double lunchCost(){
    double total_lunch;
    printf("Please enter your trip's total lunch cost:");
    scanf("%lf", &total_lunch);

    return total_lunch;
}

double dinnerCost(){
    double total_dinner;
    printf("Please enter your trip's total dinner cost:");
    scanf("%lf", &total_dinner);

    return total_dinner;
}