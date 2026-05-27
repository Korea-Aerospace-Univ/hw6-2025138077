#include <stdio.h>

int main(void) {
    int N;
    int arr1[20], arr2[20];
    int *ptr1 = arr1, *ptr2 = arr2;
    
    scanf("%d", &N);
    for(int i = 0; i < N; i++) {
        scanf("%d", (ptr1 + i));
    }
    
    for(int i = 0; i < N; i++) {
        scanf("%d", (ptr2 + i));
    }
    
    for(int i = 0; i < N; i++) {
        int a = *(ptr1 + i); 
        int b = *(ptr2 + (N - 1 - i)); 
        
        printf(" %d", a + b);
    }
    
    return 0;
}
