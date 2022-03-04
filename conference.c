#include <stdio.h>
#include <math.h>
//#include”functions.h”

double validateMoney() {
    double cost;
    scanf("%lf", &cost);
    cost = floorf(cost * 100) / 100;
    return cost;
}

double conferenceFee() {
    double fee = validateMoney();
    return fee;
}

int main() {
    printf("Please enter the conference fee: ");
    double fee = conferenceFee();
    printf("The fee is: $");
    printf("%.2f", fee);
    printf("\n");
    return 0;
}