#include <stdio.h>

#define BALL_FACTOR (4.0f/3.0f)
#define PI 3.14159

int main() {
    int r;
    float v;

    printf("Input ball radius:");
    scanf("%d", &r);


    v = BALL_FACTOR * PI * r * r * r;

    printf("Ball Volume :%.2f", v);

    return 0;
}