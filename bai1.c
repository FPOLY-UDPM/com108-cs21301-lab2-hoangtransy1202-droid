/******************************************************************************
 * Họ và tên: [Tran Si Hoang]
 * MSSV:      [ps49106]
 * Lớp:       [CS21301]
 *****************************************************************************/

 // BÀI 1: XÂY DỰNG CHƯƠNG TRÌNH CỘNG / TRỪ 2 SỐ 
// Input: Nhập vào từ bàn phím 2 số  
// Output: Hiển thị ra màn hình tổng, hiệu 2 số 

#include <stdio.h>

int main(){
    int a, b; 

    printf("Nhap hai so a va b: ");
    scanf("%d %d", &a, &b);


    int tong = a + b;
    int hieu = a - b;

    printf("Tong cua %d va %d la: %d\n", a, b, tong);
    printf("Hieu cua %d va %d la: %d\n", a, b, hieu );

}