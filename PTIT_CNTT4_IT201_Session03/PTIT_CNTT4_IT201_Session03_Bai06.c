//
// Created by Admin on 6/20/2025.
//
#include <stdio.h>
#include <stdlib.h>

int main() {
    int n, m;
    printf("Nhap so luong phan tu: ");
    scanf("%d", &n);
    if (n < 0 || n > 1000) {
        printf("So luong phan tu khong hop le\n");
        return 0;
    }
    int *arr = (int *) malloc(n * sizeof(int));
    if (arr == NULL) {
        printf("Khong the cap phat bo nho.\n");
        return 1;
    }
    printf("Nhap %d phan tu:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    printf("Nhap so luong phan tu them vao: ");
    scanf("%d", &m);
    if (m > 0) {
        arr = (int *) realloc(arr, (n + m) * sizeof(int));
        if (arr == NULL) {
            printf("Khong the cap phat lai bo nho.\n");
            return 1;
        }
        printf("Nhap %d phan tu them:\n", m);
        for (int i = 0; i < m; i++) {
            scanf("%d", &arr[n + i]);
        }
        n += m;
    }
    printf("[");
    for (int i = 0; i < n; i++) {
        printf("%d", arr[i]);
        if (i != n - 1) {
            printf(", ");
        }
    }
    printf("]\n");
    free(arr);
    return 0;
}
