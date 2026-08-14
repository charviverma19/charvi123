#include <stdio.h>

int main()
 {
    int Seconds;
    int hours, minutes, seconds;

    printf("Enter time in seconds: ");
    scanf("%d", &Seconds);

    hours = Seconds / 3600;
    minutes = (Seconds % 3600) / 60;
    seconds = Seconds % 60;

    printf("Time = %02d:%02d:%02d\n", hours, minutes, seconds);

    return 0;
}
