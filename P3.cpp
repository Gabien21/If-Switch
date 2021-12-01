#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    float a;
    float b;
    float c;
    cout << "Chuong trinh thu tam giac: " << endl;
    cout << "Ban hay nhap chieu dai cac canh cua mot tam giac!" << endl;
    cout << "Nhap canh a: "; cin >> a;
    cout << "Nhap canh b: "; cin >> b;
    cout << "Nhap canh c: "; cin >> c;
    if(((a + b) < c) || ((b + c) < a) || ((a + c) < b)) cout << "Day khong phai la tam giac!" << endl;
    else 
    {
        if((a == b) && (b == c)) cout << "Day la tam giac deu!" << endl;
        else if((a * a + b * b == c * c) || (a * a + c * c == b * b) || c * c + b * b == a * a) cout << "Day la mot tam giac vuong!" << endl;
        else if(((a * a + b * b == c * c) && (a == b)) || ((a * a + c * c == b * b) && (a == c)) || ((c * c + b * b == a * a) && (b == c))) cout << "Day la mot tam giac vuong can!" << endl;
        else if((a == b) || (a == c) || (b == c)) cout << "Day la mot tam giac can!" << endl;
        else cout << "Day la mot tam giac thuong!" << endl;
    }
    return 0;
}
