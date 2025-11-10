#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, even = 0, odd = 0;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int *arr = (int*)malloc(n * sizeof(int));
    printf("Enter elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    for (int i = 0; i < n; i++) {
        if (arr[i] % 2 == 0)
            even++;
        else
            odd++;
    }
    printf("Even numbers: %d\nOdd numbers: %d", even, odd);
    free(arr);
    return 0;
}

