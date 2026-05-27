#include <stdio.h>

int main(void) {
    int N;
    int arr1[20], arr2[20];

    scanf("%d", &N);
    for (int *p = arr1; p < arr1 + N; p++) {
        scanf("%d", p);
    }

    for (int *q = arr2; q < arr2 + N; q++) {
        scanf("%d", q);
    }

    for (int *p = arr1, *q = arr2 + N - 1; p < arr1 + N; p++, q--) {
        printf(" %d", *p + *q);
    }
    
    return 0;
}
