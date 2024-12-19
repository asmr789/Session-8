#include <stdio.h>

int main() {
    int array[] = {0,1,2,3,4,5,6,7,8,9,10};
    int n = sizeof(array) / sizeof(array[0]); 
    int x, found = 0; 
    printf("Nhap phan tu can tim: ");
    scanf("%d", &x);
    for (int i = 0; i < n; i++) {
        if (array[i] == x) { 
            printf("Vi tri phan tu trong mang la:array[%d]\n",i);
            found = 1; 
            break; 
        }
    }
    if (found == 0) {
        printf("Phan tu khong ton tai trong mang.\n");
    }
    return 0;
}