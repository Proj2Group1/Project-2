#include <stdio.h>
#include”functions.h”

int countBreakfast(int departureTime[], int arrivalTime[], int days) {
    int count = days;

    if (departureTime[0] <= 6 && arrivalTime[0] > 8)
        return count;
    else if (departureTime[0] >= 7 && arrivalTime[0] <= 8)
        return count -= 2;
    else 
        return count -=1; 
}

int countLunch(int departureTime[], int arrivalTime[], int days) {
    int count = days;

    if (departureTime[0] <= 11 && arrivalTime[0] > 13)
        return count;
    else if (departureTime[0] >= 12 && arrivalTime[0] <= 13)
        return count -= 2;
    else 
        return count -=1; 
}

int countDinner(int departureTime[], int arrivalTime[], int days) {
    int count = days;

    if (departureTime[0] <= 17 && arrivalTime[0] > 19)
        return count;
    else if (departureTime[0] >= 18 && arrivalTime[0] <= 19)
        return count -= 2;
    else 
        return count -=1; 
}

double companyCoveredFood(int departureTime[], int arrivalTime[], int days) {
    double costCovered = 0.0;

    int b = countBreakfast(departureTime, arrivalTime, days);
    int l = countLunch(departureTime, arrivalTime, days);
    int d = countDinner(departureTime, arrivalTime, days);
    costCovered += 9.00 * b;
    costCovered += 12.00 * l;
    costCovered += 16.00 * d;

    return costCovered;
}

/*int main() {
    int arr[] = {0, 0, 0};
    int arr2[] = {0, 0, 0};
    printf("%d", countBreakfast(arr, arr2, 4));
    printf("\n");

    return 0;
}*/