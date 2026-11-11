
#include <stdio.h>

int main() {

    int angle1;
    int angle2;
    int angle3;
    int sum;

    const int TOTAL_ANGLE = 180;

    printf("Enter first angle: ");
    if (scanf("%d", &angle1) != 1) {
        printf("Invalid input.");
        return 0;
    }

    printf("Enter second angle: ");
    if (scanf("%d", &angle2) != 1) {
        printf("Invalid input.");
        return 0;
    }

    if (angle1 <= 0)
    {
        printf("First angle is invalid.");
        return 0;
    }

    if (angle2 <= 0)
    {
        printf("Second angle is invalid.");
        return 0;
    }

    sum = angle1 + angle2;

    if (sum >= TOTAL_ANGLE)
    {
        printf("Sum of angles is not valid for a triangle.");
        return 0;
    }

    angle3 = TOTAL_ANGLE - sum;

    printf("The third angle is: %d degrees\n", angle3);

    if (angle1 == 90 || angle2 == 90 || angle3 == 90)
    {
        printf("This is a right-angled triangle.\n");
    }
    else
    {
        printf("This is NOT a right-angled triangle.\n");
    }

    return 0;
}
