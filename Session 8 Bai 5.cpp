#include <stdio.h>

int main() {
    int matrix[4][3]={{1,2,3},{6,4,5},{7,8,9}};
    int rows = 4, cols = 3; 
    int sum = 0;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                sum += matrix[i][j];
            }
        }
    }
    printf("Tong cac phan tu cua ma tran la: %d\n", sum);
    
    return 0;
}