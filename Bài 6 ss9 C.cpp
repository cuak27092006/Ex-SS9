#include <stdio.h>

int main() {
    int arr[100][100];
    int rows = 0, cols = 0;
    int choice;

    do {
        printf("\nMENU\n");
        printf("1. Nh?p kích c? và giá tr? các ph?n t? c?a m?ng\n");
        printf("2. In giá tr? các ph?n t? c?a m?ng theo ma tr?n\n");
        printf("3. In giá tr? các ph?n t? là l? và tính t?ng\n");
        printf("4. In ra các ph?n t? n?m trên du?ng biên và tính tích\n");
        printf("5. In ra các ph?n t? n?m trên du?ng chéo chính\n");
        printf("6. In ra các ph?n t? n?m trên du?ng chéo ph?\n");
        printf("7. In ra dòng có t?ng giá tr? các ph?n t? là l?n nh?t\n");
        printf("8. Thoát\n");
        printf("L?a ch?n c?a b?n: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Nh?p s? hàng: ");
            scanf("%d", &rows);
            printf("Nh?p s? c?t: ");
            scanf("%d", &cols);

            if (rows <= 0 || cols <= 0 || rows > 100 || cols > 100) {
                printf("Kích c? không h?p l?.\n");
                rows = cols = 0;
            } else {
                printf("Nh?p các ph?n t? c?a m?ng:\n");
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
                printf("Các ph?n t? l? trong m?ng:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (arr[i][j] % 2 != 0) {
                            printf("%d ", arr[i][j]);
                            sum += arr[i][j];
                        }
                    }
                }
                printf("\nT?ng các ph?n t? l?: %d\n", sum);
            }
        } else if (choice == 4) {
            if (rows == 0 || cols == 0) {
                printf("M?ng chua du?c kh?i t?o.\n");
            } else {
                int product = 1;
                printf("Các ph?n t? trên du?ng biên:\n");
                for (int i = 0; i < rows; i++) {
                    for (int j = 0; j < cols; j++) {
                        if (i == 0 || i == rows - 1 || j == 0 || j == cols - 1) {
                            printf("%d ", arr[i][j]);
                            product *= arr[i][j];
                        }
                    }
                }
                printf("\nTích các ph?n t? trên du?ng biên: %d\n", product);
            }
        } else if (choice == 5) {
            if (rows == 0 || cols == 0 || rows != cols) {
                printf("M?ng không ph?i ma tr?n vuông.\n");
            } else {
                printf("Các ph?n t? trên du?ng chéo chính:\n");
                for (int i = 0; i < rows; i++) {
                    printf("%2d ", arr[i][i]);
                }
                printf("\n");
            }
        } else if (choice == 6) {
            if (rows == 0 || cols == 0 || rows != cols) {
                printf("M?ng không ph?i ma tr?n vuông.\n");
            } else {
                printf("Các ph?n t? trên du?ng chéo ph?:\n");
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
                printf("Dòng có t?ng l?n nh?t là dòng %d v?i t?ng = %d\n", maxRow, maxSum);
                printf("Các ph?n t? c?a dòng dó: ");
                for (int j = 0; j < cols; j++) {
                    printf("%d ", arr[maxRow][j]);
                }
                printf("\n");
            }
        } else if (choice == 8) {
            printf("Thoát chuong trình.\n");
        } else {
            printf("L?a ch?n không h?p l?. Vui lòng th? l?i.\n");
        }
    } while (choice != 8);

    return 0;
}
