#include <iostream>
using namespace std;

int main() 
{
    int n;
    double x;
    double s = 1;
    cout << "Tinh S = (x^2 + 1)^n" << endl;
    cout << "Nhap vao so thuc x: "; cin >> x;
    cout << "Nhap vao so nguyen duong n: "; cin >> n;
    for(int i = 0; i < n; i++) 
    {
        s = s * (x * x + 1);
    }
    cout << "Dap an la: " << s << endl;
    return 0;
}