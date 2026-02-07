/******************************************************************************
 * Họ và tên: [Huỳnh Việt Tiến]
 * MSSV:      [PS47459]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 2: TÌM GIÁ TRỊ LỚN NHẤT VÀ NHỎ NHẤT TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình giá trị nhỏ nhất và lớn nhất của mảng

// VIẾT CODE Ở ĐÂY
#include <stdio.h>

// Hàm tìm giá trị lớn nhất
int timMax(int mang[], int n) {
    int max = mang[0];
    for(int i = 1; i < n; i++) {
        if(mang[i] > max) {
            max = mang[i];
        }
    }
    return max;
}

// Hàm tìm giá trị nhỏ nhất
int timMin(int mang[], int n) {
    int min = mang[0];
    for(int i = 1; i < n; i++) {
        if(mang[i] < min) {
            min = mang[i];
        }
    }
    return min;
}

int main() {
    int n;
    printf("Nhap so phan tu cua mang: ");
    scanf("%d", &n);

    int mang[n];

    // Nhập mảng
    for(int i = 0; i < n; i++) {
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    // Gọi hàm tìm max và min
    int max = timMax(mang, n);
    int min = timMin(mang, n);

    // In kết quả
    printf("Gia tri lon nhat (max) la: %d\n", max);
    printf("Gia tri nho nhat (min) la: %d\n", min);

    return 0;
}
