#include <stdio.h>
#include <math.h>
#include ”functions.h”

double insertDoublePos() {
    double cost = -1.0;
    char input[1000];
    char* cp, badc;
    int n;
    while (cost < 0)
    {
        cp = fgets(input, sizeof(input), stdin);
        if (cp == input)
        {
            n = sscanf(input, "%lf %c", &cost, &badc);
            if (n != 1)
            {
                printf("ERROR! Please enter a number: ");
                cost = -1;
            }
            else if (cost < 0)
                printf("ERROR! Please enter a positive number: ");
            else
                return cost;
        }
    }
}

double conferenceFee() {
    double fee = insertDoublePos();
    return fee;
}

/*int main() {
    printf("Please enter the conference fee: ");
    double fee = conferenceFee();
    printf("The fee is: $");
    printf("%.2f", fee);
    printf("\n");
    return 0;
}*/