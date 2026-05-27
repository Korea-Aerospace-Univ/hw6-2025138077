#include <stdio.h>

int main(void) {
    char arr[10];
    
    for(int i = 0; i < 10; i++) {
        scanf(" %c", &arr[i]); 
    }
    
    char max_char;
    int max_count = 0;
    
    for (char *p = arr; p < arr + 10; p++) {
        int current_count = 0;
        
        for (char *q = arr; q < arr + 10; q++) {
            if (*p == *q) {
                current_count++;
            }
        }
        
        if(current_count > max_count) {
            max_count = current_count;
            max_char = *p;
        }
    }
  
    printf("%c %d", max_char, max_count);
  
    return 0;
}
