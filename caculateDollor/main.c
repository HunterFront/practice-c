#include <stdio.h>

#define $20 20
#define $10 10
#define $5 5
#define $1 1

int main() {
    int dollors, count_$20, count_$10, count_$5, count_$1;

    printf("Enter dollors:");
    scanf("%d", &dollors);

//    count_$20 = dollors / $20;
//    count_$10 = (dollors - count_$20 * $20) / $10;
//    count_$5 = (dollors - count_$20 * $20 - count_$10 * $10) / $5;
//    count_$1 = (dollors - count_$20 * $20 - count_$10 * $10 - count_$5 * $5) / $1;

    count_$20 = dollors / $20;
    count_$10 = dollors % $20 / $10;
    count_$5 = dollors % $20 % $10 / $5;
    count_$1 = dollors % $20 % $10 % $5 / $1;

    printf("$20 bills: %d\n", count_$20);
    printf("$10 bills: %d\n", count_$10);
    printf("$5 bills: %d\n", count_$5);
    printf("$1 bills: %d\n", count_$1);


    return 0;
}