#include <iostream>
#include <math.h>
using namespace std;

int main() 
{
    float a;
    float b; 
    float c;
    float delta = 0;
    cout << "Giai phuong trinh bac hai ax^2 + bx + c" << endl;
    cout << "Nhap a: "; cin >> a;
    cout << "Nhap b: "; cin >> b;
    cout << "Nhap c: "; cin >> c;
    
    if(a == 0) 
    {
        if(b == 0) 
        {
            if(c == 0) cout << "Phuong trinh vo so nghiem!" << endl;
            else cout << "Phuong trinh vo nghiem!" << endl;
        } 
        else cout << "Nghiem cua phuong trinh la: x = " << (- c) / b;        
    } 
    else 
    {
        delta = b  *b - 4 * a * c;
        if(delta < 0) cout << "Phuong trinh vo nghiem!" << endl;
        else if(delta == 0) cout << "Phuong trinh co nghiem kep: x = " << (- b) / (2 * a);
        else 
        {
            cout << "Phuong trinh co hai nghiem phan biet! " << endl;
            cout << "x1 = " << (- b + sqrt(delta)) / (2 * a) << endl;
            cout << "x2 = " << (- b - sqrt(delta)) / (2 * a) << endl;
        }
    } 
    return 0;
}