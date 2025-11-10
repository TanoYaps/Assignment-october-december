#include <stdio.h>

int main() {
    int n = 4;  
    int num = 10;  
    int i, j, k;

    for (i = 1; i <= n; i++) {
        
        for (j = i; j < n; j++) {
            printf(" ");
        }

        for (k = 1; k <= i; k++) {
            printf("%d", num);
            num--;
        }
        printf("\n");
    }

    return 0;
}