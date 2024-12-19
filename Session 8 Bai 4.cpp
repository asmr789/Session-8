#include <stdio.h>

int main() {
    int array[4][3]={{1,2,3},{6,4,5},{7,8,9}};
    int max,min;
	for (int i = 0; i < 4; i++) {
		for (int j = 0;j<3;j++){
        if (array[i][j] > max) {
            max = array[i][j];
        }
        if (array[i][j] < min) {
            min = array[i][j];
        }
    }
    }
    printf("Phan tu lon nhat trong mang la: %d\n", max);
    printf("Phan tu nho nhat trong mang la: %d\n", min);
    return 0;
}