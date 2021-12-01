//Nhập vào 3 số a, b, c. In ra màn hình 3 số này theo thứ tự tăng dần. 

#include <iostream>
using namespace std;

int main() {
    float a, b, c;
    float max = 0;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    cout << "Nhap c: "; cin >> c;
    if(a > b) {
        a = a + b;
        b = a - b;
        a = a - b;
    }

    if(a > c) {
        a = a + c;
        c = a - c;
        a = a - c;
    }

    if(b > c) {
       b = b + c;
       c = b - c;
       b = b - c;
    }

    cout << a << " " << b << " " << c;
    return 0;
}
