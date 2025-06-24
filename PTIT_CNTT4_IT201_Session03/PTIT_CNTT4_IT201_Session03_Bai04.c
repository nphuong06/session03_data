//
// Created by Admin on 6/20/2025.
//
#include <stdio.h>
#include <stdlib.h>

int timMax(int **mang, int rows, int cols) {
    int max = mang[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mang[i][j] > max) {
                max = mang[i][j];
            }
        }
    }
    return max;
}

int timMin(int **mang, int rows, int cols) {
    int min = mang[0][0];
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (mang[i][j] < min) {
                min = mang[i][j];
            }
        }
    }
    return min;
}

int main() {
    int rows, cols;
    printf("Nhap so hang(rows): ");
    scanf("%d", &rows);
    printf("Nhap so cot(cols): ");
    scanf("%d", &cols);
    if (rows <= 0 || cols <= 0 || rows >= 1000 || cols >= 1000) {
        if (rows <= 0 && cols <= 0) {
            printf("So cot và so hang khong hop le\n");
            return 0;
        } else if (cols <= 0) {
            printf("So cot khong hop le\n");
            return 0;
        } else if (rows <= 0) {
            printf("So hang khong hop le\n");
            return 0;
        }
        int **mang = (int **) malloc(rows * sizeof(int *));
        for (int i = 0; i < rows; i++) {
            mang[i] = (int *) malloc(cols * sizeof(int));
        }
        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                printf("Nhap phan tu [%d][%d]: ", i, j);
                scanf("%d", &mang[i][j]);
            }
        }
        int max = timMax(mang, rows, cols);
        int min = timMin(mang, rows, cols);
        printf("Max=%d\n", max);
        printf("Min=%d\n", min);
        for (int i = 0; i < rows; i++) {
            free(mang[i]);
        }
        free(mang);
        return 0;
    }
