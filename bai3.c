/******************************************************************************
 * Họ và tên: [Tran Si Hoang]
 * MSSV:      [PS49106]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 3: XÂY DỰNG CHƯƠNG TRÌNH TÍNH CHU VI DIỆN TÍCH HÌNH TRÒN 
// Input: Nhập vào bán kính của đường tròn 
// Output: Hiển thị ra màn hình chu vi và diện tích của hình tròn

#include <stdio.h>

int main(){
    // Khai báo biến
    int bankinh;
    float chuvi, dientich;
    // Nhập dữ liệu
    printf("Nhap ban kinh hinh tron: ");
    scanf("%d", &bankinh);

    // Xử lý, tính toán
    chuvi = 2 * 3.14 * bankinh;
    dientich = 3.14 * bankinh * bankinh;

    // Hiển thị kết quả
    printf("Chu vi cua hinh tron la: %.2f\n", chuvi);
    printf("Dien tich cua hinh tron la: %.2f\n", dientich);
    return 0;

}