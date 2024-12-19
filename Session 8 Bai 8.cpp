#include <stdio.h>

int main() {
    int n1,n2,sum = 0;
    printf("Nhap n1 ma tran vuong (n1 x n2): ");
    scanf("%d", &n1);
    printf("Nhap n2 ma tran vuong (n1 x n2): ");
    scanf("%d", &n2); 
    int matrix[n1][n2];
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            printf("Nhap matrix[%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Cac phan tu trong ma tran:\n");
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            printf(" %d ", matrix[i][j]);
        }
        printf("\n");
    }
    printf("Cac phan tu tren duong cheo phu la: ");
    for (int i = 0; i < n1; i++) {
        printf("%d ", matrix[i][n2 - i - 1]); // Đường chéo phụ: chỉ số cột là (n - i - 1)
        sum += matrix[i][n2 - i - 1]; 
    }
    printf("\nTong cac phan tu tren duong cheo phu la: %d\n", sum);
    
    return 0;
}