#include <stdio.h>
#define MAX 10

void addMatrix() {
    int r, c, i, j;
    int A[MAX][MAX], B[MAX][MAX], C[MAX][MAX];

    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);

    if(r > MAX || c > MAX || r <= 0 || c <= 0) {
        printf("Invalid matrix size");
        return;
    }

    printf("Enter first matrix:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &A[i][j]);

    printf("Enter second matrix:\n");
    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            scanf("%d", &B[i][j]);

    for(i=0; i<r; i++)
        for(j=0; j<c; j++)
            C[i][j] = A[i][j] + B[i][j];

    printf("Resultant Matrix:\n");
    for(i=0; i<r; i++) {
        for(j=0; j<c; j++)
            printf("%d ", C[i][j]);
        printf("\n");
    }
}

int main() {
    addMatrix();
    return 0;
}
