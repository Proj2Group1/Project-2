#include <stdio.h>
//#include”functions.h”

int countBreakfast(int* departureTime, int* arrivalTime) {
    int count = 0;

    if (departureTime[0] <= 6)
        count++;
    if (arrivalTime[0] > 8 && arrivalTime[0] <= 13)
        count++;

    printf("breakfasts: "); //DEBUGGING
    printf("%d", count); //DEBUGGING
    printf("   "); //DEBUGGING
    return count;
}

int countLunch(int* departureTime, int* arrivalTime) {
    int count = 0;

    if (departureTime[0] >= 7 && departureTime[0] <= 11)
        count++;
    if (arrivalTime[0] > 13 && arrivalTime[0] <= 19)
        count++;

    printf("lunches: "); //DEBUGGING
    printf("%d", count); //DEBUGGING
    printf("   "); //DEBUGGING
    return count;
}

int countDinner(int* departureTime, int* arrivalTime) {
    int count = 0;

    if (departureTime[0] >= 12 && departureTime[0] <= 17)
        count++;
    if (arrivalTime[0] > 19)
        count++;

    printf("dinners: "); //DEBUGGING
    printf("%d", count); //DEBUGGING
    printf("   "); //DEBUGGING
    return count;
}

double companyCoveredFood(int* departureTime, int* arrivalTime) {
    double costCovered = 0.0;

    costCovered += 9.00 * countBreakfast(departureTime, arrivalTime);
    costCovered += 12.00 * countLunch(departureTime, arrivalTime);
    costCovered += 16.00 * countDinner(departureTime, arrivalTime);

    return costCovered;
}

//DEBUGGING below
int main() {
    int arr[] = {0, 0, 0};
    for (int i = 0; i < 24; i++) {
        printf("%d", i);
        printf(":00     ");
        printf("%.2f", companyCoveredFood(arr, arr));
        printf("\n");
        arr[0] = i;
    }
    return 0;
}