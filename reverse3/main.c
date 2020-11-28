#include <stdio.h>

#define N 10

int main() {
    int a[N], *p;

    printf("Enter %d numbers:\n", N);
    for (p = a; p < a + N; p++) {
        scanf("%d", p);
    }

    for (p = a + N - 1; p >= a; p--) {
        printf("%d ", *p);
    }

    return 0;
}