//
// Created by Admin on 6/20/2025.
//
#include <stdio.h>

void nhapMang(int arr[1000][1000], int rows, int cols) {
    printf("Nhap cac phan tu trong mang:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Phan tu [%d][%d]: ", i, j);
            scanf("%d", &arr[i][j]);
        }
    }
}

int tongCheoChinh(int arr[1000][1000], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += arr[i][i];
    }
    return tong;
}

int tongCheoPhu(int arr[1000][1000], int n) {
    int tong = 0;
    for (int i = 0; i < n; i++) {
        tong += arr[i][n - 1 - i];
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
    if (rows <= 0 && cols <= 0) {
        printf("So cot là so hang khong hop le\n");
        return 0;
    } else if (rows <= 0) {
        printf("So hang khong hop le\n");
        return 0;
    } else if (cols <= 0) {
        printf("So cot khong hop le\n");
        return 0;
    }
    nhapMang(arr, rows, cols);
    if (rows == cols) {
        int tong1 = tongCheoChinh(arr, rows);
        int tong2 = tongCheoPhu(arr, rows);
        printf("Tong duong cheo chinh=%d\n", tong1);
        printf("Tong duong cheo phu=%d\n", tong2);
    } else {
        printf("Khong ton tai duong cheo chinh\n");
        printf("Khong ton tai duong cheo phu\n");
    }
    return 0;
}
