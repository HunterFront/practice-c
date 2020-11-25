#include <stdio.h>

#define N 10

void max_min(int b[], int n, int *max, int *min);

int main() {
    int b[N], small, big, i;

    printf("Enter 10 numbers:\n");
    for (i = 0; i < N; i++) {
        scanf("%d", &b[i]);
    }

    max_min(b, N, &big, &small);

    printf("Largest: %d\n", big);
    printf("Smallest: %d\n", small);

    return 0;
}

void max_min(int b[], int n, int *max, int *min) {
    int i;

    *max = *min = b[0];
    for (i = 1; i < n; ++i) {
        if (b[i] > *max) {
            *max = b[i];
        } else if (b[i] < *min) {
            *min = b[i];
        }
    }
}