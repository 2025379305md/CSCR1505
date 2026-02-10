#include <stdio.h>
#include <math.h>

int countDigits(int num) {
    int count = 0;
    while (num) {
        count++;
        num /= 10;
    }
    return count;
}

int isArmstrong(int num) {
    int original = num;
    int digits = countDigits(num);
    int sum = 0;

    while (num) {
        int digit = num % 10;
        sum += pow(digit, digits);
        num /= 10;
    }

    return sum == original;
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("Armstrong Number\n");
    else
        printf("Not an Armstrong Number\n");

    return 0;
}
