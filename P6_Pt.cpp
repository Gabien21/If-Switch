//Nhập vào số nguyên có 3 chữ số, in ra số đảo ngược của số đó.
//Ví dụ: Số 543 có số đảo ngược là: 345

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
    cout << "So dao nguoc la: " << c << b << a;
    return 0;
}
