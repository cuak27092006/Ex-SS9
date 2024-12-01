#include <stdio.h>

int main() {
    int arr[100][100];
    int rows = 0, cols = 0;
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nh?p k�ch c? v� gi� tr? c�c ph?n t? c?a m?ng\n");
        printf("2. In gi� tr? c�c ph?n t? c?a m?ng theo ma tr?n\n");
        printf("3. In gi� tr? c�c ph?n t? l� l? v� t�nh t?ng\n");
        printf("4. In ra c�c ph?n t? n?m tr�n du?ng bi�n v� t�nh t�ch\n");
        printf("5. In ra c�c ph?n t? n?m tr�n du?ng ch�o ch�nh\n");
        printf("6. In ra c�c ph?n t? n?m tr�n du?ng ch�o ph?\n");
        printf("7. In ra d�ng c� t?ng gi� tr? c�c ph?n t? l� l?n nh?t\n");
        printf("8. Tho�t\n");
        printf("L?a ch?n c?a b?n: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nh?p s? h�ng: ");
            scanf("%d", &rows);
            printf("Nh?p s? c?t: ");
            scanf("%d", &cols);

            if (rows <= 0 || cols <= 0 || rows > 100 || cols > 100) {
                printf("K�ch c? kh�ng h?p l?.\n");
                rows = cols = 0;
            } else {
                printf("Nh?p c�c ph?n t? c?a m?ng:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("arr[%d][%d] = ", i, j);
                        scanf("%d", &arr[i][j]);
                    }
                }
            }
        } else if (choice == 2) {
            if (rows == 0 || cols == 0) {
                printf("M?ng chua du?c kh?i t?o.\n");
            } else {
                printf("Ma tr?n:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        printf("%3d ", arr[i][j]);
                    }
                    printf("\n");
                }
            }
        } else if (choice == 3) {
            if (rows == 0 || cols == 0) {
                printf("M?ng chua du?c kh?i t?o.\n");
            } else {
                int sum = 0;
                printf("C�c ph?n t? l? trong m?ng:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (arr[i][j] % 2 != 0) {
                            printf("%d ", arr[i][j]);
                            sum += arr[i][j];
                        }
                    }
                }
                printf("\nT?ng c�c ph?n t? l?: %d\n", sum);
            }
        } else if (choice == 4) {
            if (rows == 0 || cols == 0) {
                printf("M?ng chua du?c kh?i t?o.\n");
            } else {
                int product = 1;
                printf("C�c ph?n t? tr�n du?ng bi�n:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                            printf("%d ", arr[i][j]);
                            product *= arr[i][j];
                        }
                    }
                }
                printf("\nT�ch c�c ph?n t? tr�n du?ng bi�n: %d\n", product);
            }
        } else if (choice == 5) {
            if (rows == 0 || cols == 0 || rows != cols) {
                printf("M?ng kh�ng ph?i ma tr?n vu�ng.\n");
            } else {
                printf("C�c ph?n t? tr�n du?ng ch�o ch�nh:\n");
                for (int i = 0; i < rows; i++) {
                    printf("%2d ", arr[i][i]);
                }
                printf("\n");
            }
        } else if (choice == 6) {
            if (rows == 0 || cols == 0 || rows != cols) {
                printf("M?ng kh�ng ph?i ma tr?n vu�ng.\n");
            } else {
                printf("C�c ph?n t? tr�n du?ng ch�o ph?:\n");
                for (int i = 0; i < rows; i++) {
                    printf("%d ", arr[i][cols - i - 1]);
                }
                printf("\n");
            }
        } else if (choice == 7) {
            if (rows == 0 || cols == 0) {
                printf("M?ng chua du?c kh?i t?o.\n");
            } else {
                int maxSum = 0, maxRow = 0;
                for (int i = 0; i < rows; i++) {
                    int sum = 0;
                    for (int j = 0; j < cols; j++) {
                        sum += arr[i][j];
                    }
                    if (sum > maxSum) {
                        maxSum = sum;
                        maxRow = i;
                    }
                }
                printf("D�ng c� t?ng l?n nh?t l� d�ng %d v?i t?ng = %d\n", maxRow, maxSum);
                printf("C�c ph?n t? c?a d�ng d�: ");
                for (int j = 0; j < cols; j++) {
                    printf("%d ", arr[maxRow][j]);
                }
                printf("\n");
            }
        } else if (choice == 8) {
            printf("Tho�t chuong tr�nh.\n");
        } else {
            printf("L?a ch?n kh�ng h?p l?. Vui l�ng th? l?i.\n");
        }
    } while (choice != 8);

    return 0;
}
