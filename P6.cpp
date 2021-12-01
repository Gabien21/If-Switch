#include <iostream>
#include <cmath>
using namespace std;

int main() 
{
    float toan;
    float ly;
    float hoa;
    float tb;
    cout << "Nhap diem toan: "; cin >> toan;
    cout << "Nhap diem ly: "; cin >> ly;
    cout << "Nhap diem hoa: "; cin >> hoa;
    tb = (toan + ly + hoa) / 3;
    cout << "Diem trung binh cua hoc sinh la: " << tb << endl;
    if(tb < 3) cout << "Hoc sinh kem!";
    else if(tb < 5) cout << "Hoc sinh yeu!";
    else if(tb < 6.5) cout << "Hoc sinh trung binh!";
    else if(tb < 8) cout << "Hoc sinh kha!";
    else if(tb < 9) cout << "Hoc sinh gioi!";
    else cout << "Hoc sinh suat sac!";
    return 0;
}