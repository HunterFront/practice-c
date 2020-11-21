#include <stdio.h>
#define INCHES_PER_POUND 166

int main() {
    int height, width, length, volume;

    printf("Enter height of box:");
    scanf("%d", &height);
    printf("Enter width of box:");
    scanf("%d", &width);
    printf("Enter length of box:");
    scanf("%d", &length);

    volume = height * width * length;

    printf("Dimensions: %dx%dx%d\n", length, width, height);
    printf("Volume (cubic inches): %d\n", volume);
    printf("Dimensional weight (pounds): %d\n", (volume + INCHES_PER_POUND - 1) / INCHES_PER_POUND);
    return 0;
}