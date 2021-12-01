#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main() 
{
    float x;
    float tien = 0;
    cout << "Nhap vao so kilomet x: "; cin >> x;
    float a = x;
    if(x <= 1) 
    {
        tien = x * 15;
    } 
    else if (x <= 5) 
    {
        x = x - 1;
        tien = 15 + x * 13.5;
    } 
    else 
    {
        x = x - 5;
        tien = 15 + 13.5 * 4 + x * 11;
    }
    if (a > 120) 
    {
        tien = tien - tien * 10 / 100;
    }
    cout << tien << endl;
    cout << "So tien ban phai tra la: " << fixed << setprecision(1) << tien * 1000;
    return 0;
}