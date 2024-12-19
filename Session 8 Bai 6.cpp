#include <stdio.h>

int main() {
	int m,n,sum=0;
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
	for(int i=0;i<m;i++){
		for (int j =0;j <n;j++){
			sum += matrix[i][j];
		}
		printf("Tong duong bien ma tran: %d\n",sum);
	}
	
	
}