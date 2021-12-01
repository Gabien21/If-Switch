//Nhập số tiền nguyên N đồng, đổi ra xem được bao nhiêu tờ 10 đồng, 5 đồng, 2 đồng và 1 đồng.
//Ví dụ: N = 543đ = 54 tờ 10đ + 0 tờ 5đ + 1 tờ 2đ + 1 tờ 1đ 

#include <iostream>
using namespace std;

int main() {
    int N;
    int so_10;
    int so_5;
    int so_2;
    int so_1;
    cout << "Nhap so nguyen N dong: "; cin >> N;
    if(N >= 10) {
        so_10 = N / 10;
        N = N % 10;
        cout << "So to 10 dong la: " << so_10 << endl;
    } else cout << "So to 10 dong la: 0" << endl;
     if(N >= 5) {
        so_5 = N / 5;
        N = N % 5;
        cout << "So to 5 dong la: " << so_5 << endl;
    } else cout << "So to 5 dong la: 0" << endl;
     if(N >= 2) {
        so_2 = N / 2;
        N = N % 2;
        cout << "So to 2 dong la: " << so_2 << endl;
    } else cout << "So to 2 dong la: 0" << endl;
     if(N >= 1) {
        so_1 = N;
        cout << "So to 1 dong la: " << so_1 << endl;
    } else cout << "So to 1 dong la: 0" << endl;
    return 0;
}
