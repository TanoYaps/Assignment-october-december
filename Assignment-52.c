#include <stdio.h>
#include <stdlib.h>

int main() {
    int r, c;
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    int **a = (int **)malloc(r * sizeof(int *));
    for(int i = 0; i < r; i++) {
        a[i] = (int *)malloc(c * sizeof(int));
    }
    int sum = 0;

    printf("Enter matrix elements:\n");
    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            scanf("%d", &a[i][j]);

    for (int i = 0; i < r; i++)
        for (int j = 0; j < c; j++)
            sum += a[i][j];

    printf("Sum of all elements = %d", sum);
    return 0;
}
