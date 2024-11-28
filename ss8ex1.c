#include <stdio.h>

int main() {
    int num[4] = {1, 2, 3, 4}; 
    for (int i = 3; i >= 0; i--) {
        printf("%d ", num[i]);
    }
    return 0;
}

