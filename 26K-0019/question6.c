#include <stdio.h>

int main() {
    int shifts[4][3];
    int target;
    int newRow[3];

    printf("Enter initial 3x3 production data:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &shifts[i][j]);
        }
    }

    printf("Enter target row index (0-3) for insertion: ");
    scanf("%d", &target);

    printf("Enter 3 new production values: ");
    for (int j = 0; j < 3; j++) {
        scanf("%d", &newRow[j]);
    }

    for (int i = 3; i > target; i--) {
        for (int j = 0; j < 3; j++) {
            shifts[i][j] = shifts[i-1][j];
        }
    }

    for (int j = 0; j < 3; j++) {
        shifts[target][j] = newRow[j];
    }

    printf("\nResulting 4x3 Matrix:\n");
    for (int i = 0; i < 4; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", shifts[i][j]);
        }
        printf("\n");
    }

    return 0;
}