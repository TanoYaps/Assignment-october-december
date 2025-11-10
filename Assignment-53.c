#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    if (scanf("%d %d", &r, &c) != 2 || r <= 0 || c <= 0) {
        fprintf(stderr, "Invalid dimensions\n");
        return 1;
    }

    int *a = malloc(r * c * sizeof(int));
    int *t = malloc(c * r * sizeof(int));
    if (!a || !t) {
        fprintf(stderr, "Allocation failed\n");
        free(a);
        free(t);
        return 1;
    }

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            if (scanf("%d", &a[i * c + j]) != 1) {
                fprintf(stderr, "Invalid input\n");
                free(a);
                free(t);
                return 1;
            }

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            t[j * r + i] = a[i * c + j];

    printf("Transpose of matrix:\n");
    for (int i = 0; i < c; i++) {
        for (int j = 0; j < r; j++)
            printf("%d ", t[i * r + j]);
        printf("\n");
    }

    free(a);
    free(t);
    return 0;
}
