//Giả sử lãi suất mỗi tháng của ngân hàng là q (ví dụ lãi suất 1% thì q=0.01) với hình thức gởi tiết
//kiệm lãi nhập vốn. Hãy nhập vào số tiền gửi M, số tháng gửi n và lãi suất q, tính và in ra tổng số
//tiền lãi.

#include <iostream>
using namespace std;

int main() {
    float q;
    float M;
    int n;
    cout << "Nhap so tien gui tiet kiem moi thang: "; cin >> M;
    cout << "Nhap so thang gui: "; cin >> n;
    cout << "Nhap lai suat hang thang: "; cin >> q;
    float X = M;
    for(int i = 1; i <= n; i++) {
        M = M + M * q / 100;
    }
    cout << "So tien lai sau " << n << " thang la: " << M - X;
    return  0;
}
