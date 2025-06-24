//
// Created by Admin on 6/20/2025.
//
#include <stdio.h>

int tinhTongHang(int arr[1000][1000], int cols, int k) {
    int tong = 0;
    for (int j = 0; j < cols; j++) {
        tong += arr[k][j];
    }
    return tong;
}

int main() {
    int rows, cols;
    int arr[1000][1000];
    printf("Nhap so hang: ");
    scanf("%d", &rows);
    printf("Nhap so cot: ");
    scanf("%d", &cols);
    if (rows < 0 && cols < 0) {
        printf("So hang va so cot khong hop le\n");
        return 0;
    } else if (rows < 0) {
        printf("So hang khong hop le\n");
        return 0;
    } else if (cols < 0) {
        printf("So cot khong hop le\n");
        return 0;
    }
    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
    int k;
    printf("Nhap hang can tinh tong (k): ");
    scanf("%d", &k);
    if (k < 0 || k >= rows) {
        printf("Hang can tinh khong ton tai\n");
        return 0;
    }
    int sum = tinhTongHang(arr, cols, k);
    printf("sum=%d\n", sum);
    return 0;
}
