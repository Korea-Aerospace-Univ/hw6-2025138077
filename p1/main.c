#include <stdio.h>

int main(void) {
    int x = 10;
    char arr[x];
    char *ptr = arr;
    
    for(int i = 0; i < x; i++) {
        scanf(" %c", (ptr + i));
    }
    
    char max_char;
    int max_count = 0;
    
    for(int i = 0; i < x; i++) {
        char current_char = *(ptr + i);
        int current_count = 0;
        
        for(int j = 0; j < x; j++) {
            if(*(ptr + j) == current_char) {
                current_count++;
            }
        }
        
        if(current_count > max_count) {
                max_count = current_count;
                max_char = current_char;
            }
    }
  
    printf("%c %d", max_char, max_count);
  
    return 0;
}
