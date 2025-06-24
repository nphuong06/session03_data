//
// Created by Admin on 6/19/2025.
//
#include <stdio.h>
#include <stdlib.h>

float tinhTrungBinhChan(int *mang, int n) {
    int tong = 0;
    int dem = 0;
    for (int i = 0; i < n; i++) {
        if (mang[i] % 2 == 0) {
            tong += mang[i];
            dem++;
        }
    }
    if (dem == 0) return 0;
    return (float) tong / dem;
}

int main() {
    int n;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n <= 0 || n >= 1000) {
        printf("So luong phan tu khong hop le\n");
        return 0;
    }
    int *mang = (int *) malloc(n * sizeof(int));
    if (mang == NULL) {
        printf(" Khong the cap phat bo nho\n");
        return 1;
    }
    for (int i = 0; i < n; i++) {
        printf("Nhap phan tu thu %d: ", i + 1);
        scanf("%d", &mang[1]);
    }
    float ketQua = tinhTrungBinhChan(mang, n);
    printf("Average=%.2f\n", ketQua);
    free(mang);
    return 0;
}
