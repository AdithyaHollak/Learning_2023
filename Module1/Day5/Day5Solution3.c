#include <stdio.h>

struct Time {
    int hours;
    int minutes;
    int seconds;
};

struct Time getTime() {
    struct Time t;
    
    printf("Enter hours: ");
    scanf("%d", &t.hours);
    
    printf("Enter minutes: ");
    scanf("%d", &t.minutes);
    
    printf("Enter seconds: ");
    scanf("%d", &t.seconds);
    
    return t;
}

struct Time DifferenceTime(struct Time t1, struct Time t2) {
    struct Time diff;
    int totalSeconds1, totalSeconds2, diffSeconds;
    
    totalSeconds1 = t1.hours * 3600 + t1.minutes * 60 + t1.seconds;
    totalSeconds2 = t2.hours * 3600 + t2.minutes * 60 + t2.seconds;
    
    diffSeconds = totalSeconds2 - totalSeconds1;
    
    diff.hours = diffSeconds / 3600;
    diffSeconds %= 3600;
    diff.minutes = diffSeconds / 60;
    diff.seconds = diffSeconds % 60;
    
    return diff;
}

void displayDifference(struct Time diff) {
    printf("Time Difference: %02d:%02d:%02d\n", diff.hours, diff.minutes, diff.seconds);
}

int main() {
    struct Time time1, time2, diff;
    
    printf("Enter first time period:\n");
    time1 = getTime();
    
    printf("\nEnter second time period:\n");
    time2 = getTime();
    
    diff = DifferenceTime(time1, time2);
    
    printf("\n");
    displayDifference(diff);
    
    return 0;
}
