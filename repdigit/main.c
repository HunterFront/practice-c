#include <stdio.h>
#include <stdbool.h>

int main() {
    bool digitSeen[10] = {false};
    long n;
    int digit;

    printf("Enter a number:");
    scanf("%ld", &n);

    while (n > 0) {
        digit = n % 10;
        if(digitSeen[digit])
            break;
        else
            digitSeen[digit] = true;
        n /= 10;
    }

    if(n > 0)
        printf("Digit repeated\n");
    else
        printf("No repeated digit\n");

    return 0;
}