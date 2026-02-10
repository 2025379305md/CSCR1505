#include <stdio.h>

void convertTime(int totalSeconds) {
    int hours, minutes, seconds;

    hours = totalSeconds / 3600;
    totalSeconds %= 3600;

    minutes = totalSeconds / 60;
    seconds = totalSeconds % 60;

    printf("Time = %d:%d:%d\n", hours, minutes, seconds);
}

int main() {
    int sec;
    printf("Enter seconds: ");
    scanf("%d", &sec);

    convertTime(sec);
    return 0;
}
