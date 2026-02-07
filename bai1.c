/******************************************************************************
 * Họ và tên: [Huỳnh Việt Tiến]
 * MSSV:      [PS47459]
 * Lớp:       [CS21302]
 *****************************************************************************/

//  BÀI 1: TÍNH TRUNG BÌNH TỔNG CÁC SỐ CHIA HẾT CHO 3 TRONG MẢNG 
//  Input: Nhập vào từ bàn phím 1 mảng các số nguyên. Mảng gồm n phần tử 
//  Output: Xuất ra màn hình kết quả của trung bình tổng các số chia hết cho 3 trong mảng 


// VIẾT CODE Ở ĐÂY

#include <stdio.h>

int main() {
    int n;

    // Nhập số phần tử của mảng
    printf("Nhap so phan tu n: ");
    scanf("%d", &n);

    int mang[n]; // khai báo mảng

    // Nhập dữ liệu cho mảng
    for (int i = 0; i < n; i++) {
        printf("Nhap mang[%d]: ", i);
        scanf("%d", &mang[i]);
    }

    float tong = 0;   // tổng các số chia hết cho 3
    int count = 0;    // đếm số phần tử chia hết cho 3

    // Duyệt mảng
    for (int i = 0; i < n; i++) {
        if (mang[i] % 3 == 0) {
            tong += mang[i]; // cộng vào tổng
            count++;         // tăng biến đếm
        }
    }

    // Tính trung bình
    if (count > 0) {
        float tb = tong / count;
        printf("Trung binh cac so chia het cho 3 = %.2f", tb);
    } else {
        printf("Khong co so nao chia het cho 3!");
    }

    return 0;
}
