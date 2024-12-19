#include <stdio.h>

int main() {
	int m,n;
	printf("Nhap so hang ma tran: ");
	scanf("%d",&m);
	printf("Nhap so cot ma tran: ");
	scanf("%d",&n);
	int matrix[m][n];
	for(int i=0;i<m;i++){
		for (int j =0;j <n;j++){
			printf("Nhap matrix[%d][%d]: ",i,j);
			scanf("%d",&matrix[i][j]);
		}
	}
	printf("Cac phan tu trong mang:\n");
	for(int i=0;i<m;i++){
		for (int j =0;j <n;j++){
			printf(" %d ",matrix[i][j]);
		}
		printf("\n");
	}
	
}