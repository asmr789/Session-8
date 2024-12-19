#include <stdio.h>

int main() {
    int array[] = {1,2,3,4,5,6,7};
    int n = sizeof(array) / sizeof(array[0]); 
    printf("Cac phan tu cua mang nguoc lai la:\n");
    for (int i = n - 1; i >= 0; i--) {
        printf("%d ", array[i]);
    }
    printf("\n");
    return 0;
}