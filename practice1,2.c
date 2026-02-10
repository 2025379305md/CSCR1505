#include <stdio.h>

float cost(float tsp, float tp) {
    float tcp = tsp - tp;
    return tcp / 15;
}

int main() {
    float sp, profit;

    printf("Enter total selling price of 15 items: ");
    scanf("%f", &sp);

    printf("Enter total profit: ");
    scanf("%f", &profit);

    printf("Cost price of one item = %.2f\n", cost(sp, profit));
    return 0;
}
