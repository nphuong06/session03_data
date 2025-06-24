#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0) {
        if (n < 0) {
            printf("So luong phan tu khong duoc am\n");
        } else {
            printf("So luong phan tu phai lon hon 0\n");
        }
        return 1;
    }
    int *arr = (int *) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap nhat bo nho.\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &arr[i]);
    }
    for (int i = 0; i < n; i++) {
        printf("So thu %d=%d\n", i + 1, arr[i]);
    }
    free(arr);
    return 0;
}
