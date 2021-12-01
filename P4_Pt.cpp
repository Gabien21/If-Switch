//Nhập vào số nguyên có 3 chữ số, tính tổng 3 chữ số đó.
//Ví dụ: Số 543 có tổng 3 chữ số là: 5 + 4 + 3 = 12 

#include <iostream>
using namespace std;

int main() {
    int N;
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Nhap vao so nguyen N co ba chu so: "; cin >> N;
    a = N / 100;
    b = (N - a * 100) / 10;
    c = (N - a * 100 - b * 10);
    cout << "Tong cua cac chu so la: " << a + b + c;
    return 0;
}
