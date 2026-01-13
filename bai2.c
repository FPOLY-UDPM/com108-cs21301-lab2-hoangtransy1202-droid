/******************************************************************************
 * Họ và tên: [Tran Si Hoang]

 * MSSV:      [PS49106]
 * Lớp:       [CS21301]
 *****************************************************************************/

 // BÀI 2: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HCN 
// Input: Nhập vào từ bàn phím chiều dài và chiều rộng 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình chữ nhật

#include <stdio.h>

int main(){
    // Khai báo biến
    int chieudai, chieurong;

    // Nhập dữ liệu
    printf("Nhap chieu dai va chieu rong hinh chu nhat: ");
    scanf("%d %d", &chieudai, &chieurong);
    // Xử lý, tính toán
int chuvi = 2 * (chieudai + chieurong);
int dientich = chieudai * chieurong;
    // Hiển thị kết quả
    printf("Chu vi cua hinh chu nhat la: %d\n", chuvi);
    printf("Dien tich cua hinh chu nhat la: %d\n", dientich);
    return 0;

}