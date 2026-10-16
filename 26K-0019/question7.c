#include <stdio.h>

int main() {
    float sensor_data[3][4];
    int target;

    printf("Enter 3x4 sensor data (3 days, 4 sensors):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 4; j++) {
            scanf("%f", &sensor_data[i][j]);
        }
    }

    printf("Enter defective column index (0-3) to delete: ");
    scanf("%d", &target);

    for (int i = 0; i < 3; i++) {
        for (int c = target; c < 3; c++) {
            sensor_data[i][c] = sensor_data[i][c+1];
        }
    }

    printf("\nUpdated 3x3 Matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%.2f\t", sensor_data[i][j]);
        }
        printf("\n");
    }

    return 0;
}