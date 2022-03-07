#include <stdio.h>
//#include”functions.h”

/*int countBreakfast(int* departureTime, int* arrivalTime) {
    int count = 0;

    if (departureTime[0] <= 6)
        count++;
    if (arrivalTime[0] > 8 && arrivalTime[0] <= 13)
        count++;

    printf("breakfasts: "); //DEBUGGING
    printf("%d", count); //DEBUGGING
    printf("   "); //DEBUGGING
    return count;
}*/

int countBreakfast(int* departureTime, int* arrivalTime, int days) {
    int count = days;

    if (departureTime[0] <= 6 && arrivalTime[0] > 8)
        return count;
    else if (departureTime[0] >= 7 && arrivalTime[0] <= 8)
        return count -= 2;
    else 
        return count -=1; 
}

int countLunch(int* departureTime, int* arrivalTime, int days) {
    int count = days;

    if (departureTime[0] <= 11 && arrivalTime[0] > 13)
        return count;
    else if (departureTime[0] >= 12 && arrivalTime[0] <= 13)
        return count -= 2;
    else 
        return count -=1; 
}

int countDinner(int* departureTime, int* arrivalTime, int days) {
    int count = days;

    if (departureTime[0] <= 17 && arrivalTime[0] > 19)
        return count;
    else if (departureTime[0] >= 18 && arrivalTime[0] <= 19)
        return count -= 2;
    else 
        return count -=1; 
}

double companyCoveredFood(int* departureTime, int* arrivalTime, int days) {
    double costCovered = 0.0;

    int b = countBreakfast(departureTime, arrivalTime, days);
    int l = countLunch(departureTime, arrivalTime, days);
    int d = countDinner(departureTime, arrivalTime, days);
    costCovered += 9.00 * b;
    costCovered += 12.00 * l;
    costCovered += 16.00 * d;

    printf("breakfasts: "); //DEBUGGING
    printf("%d", b); //DEBUGGING
    printf("   "); //DEBUGGING
    printf("lunches: "); //DEBUGGING
    printf("%d", l); //DEBUGGING
    printf("   "); //DEBUGGING
    printf("dinners: "); //DEBUGGING
    printf("%d", d); //DEBUGGING
    printf("   "); //DEBUGGING

    return costCovered;
}

//DEBUGGING below
int main() {
    int arr[] = {0, 0, 0};
    int arr2[] = {0, 0, 0};
    printf("days is set to 2\n");
    for (int i = 0; i < 24; i++) {
        printf("Both arrival and departure: ");
        printf("%d", i);
        printf(":00     ");
        printf("%.2f", companyCoveredFood(arr, arr, 2));
        printf("\n");
        arr[0] = i;
        arr2[0] = i;
    }
    return 0;
}