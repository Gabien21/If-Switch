//Xếp loại các học sinh trong lớp. Nhập vào họ tên, điểm Toán, Lý, Hóa của từng·học sinh. Tính điểm trung bình 3 môn và phân loại như sau:
//xuất sắc: đtb >=9.0
//giỏi: 9.0 > đtb >= 8.0
//khá: 8.0 > đtb >= 6.5
//trung bình: 6.5 > đtb >= 5.0
//yếu: 5.0 > đtb >= 3.0
//kém: 3.5 > đtb

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
