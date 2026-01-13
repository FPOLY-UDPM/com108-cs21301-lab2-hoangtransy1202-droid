/******************************************************************************
 * Họ và tên: [Tran Si Hoang]
 * MSSV:      [PS49106]
 * Lớp:       [CS21301]
 *****************************************************************************/

// BÀI 4: XÂY DỰNG CHƯƠNG TRÌNH TÍNH ĐIỂM TRUNG BÌNH 
// Input: Nhập vào từ bàn phím điểm môn Toán, Lý, Hóa 
// Output: Hiển thị ra màn hình điểm trung bình  
// Biết rằng
// Điểm Toán có hệ số 3, điểm Lý có hệ số 2, điểm Hóa có hệ số 1

#include <stdio.h>

int main(){
    // Khai báo biến
        float toan, ly, hoa;
    float diemTrungBinh;

    // Nhập dữ liệu
 printf("Nhập điểm Toán: ");
    scanf("%f", &toan);

    printf("Nhập điểm Lý: ");
    scanf("%f", &ly);

    printf("Nhập điểm Hóa: ");
    scanf("%f", &hoa);

    // Xử lý, tính toán
    diemTrungBinh = (toan * 3 + ly * 2 + hoa * 1) / (3 + 2 + 1);
    // Hiển thị kết quả
 printf("Điểm trung bình: %.2f\n", diemTrungBinh);
    return 0;

}