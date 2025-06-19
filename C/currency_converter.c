// Currency Converter
#include <stdio.h>
int main() {
    float inr;
    printf("Enter amount in INR: ");
    scanf("%f", &inr);
    printf("USD: %.2f\n", inr * 0.012);
    return 0;
}