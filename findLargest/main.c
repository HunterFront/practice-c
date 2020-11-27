#include <stdio.h>

int *find_largest(int a[], int n);

int main() {
    int a[] = {1,2,6,4}, *p;

    p = find_largest(a, 4);

    printf("%d", *p);

    return 0;
}

int *find_largest(int a[], int n) {
    int *largest, i;

    largest = &a[0];
    for (i = 1; i < n; ++i) {
        if(a[i] > *largest)
            largest = &a[i];
    }

    return largest;
}