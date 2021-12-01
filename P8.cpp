//Tính tiền thuê phòng khi biết số ngày thuê và loại phòng (A, B, C), biết:
//Loại A: 400.000 đ/ngày
//Loại B: 300.000 đ/ngày
//Loại C: 250.000 đ/ngày
//Nếu thuê quá 12 ngày thì phần trăm được giảm trên tổng số tiền (theo giá quy định) là: 10% cho loại A, 8% cho loại B hay C.

#include <iostream>
using namespace std;

int main() 
{
    char loai;
    int ngay;
    int tien;
    cout << "Nhap loai phong: "; cin >> loai;
    cout << "Nhap so ngay: "; cin >> ngay;
    switch (loai)
    {
    case 'A':
        cout << "Ban da chon phong loai A!" << endl;
        tien = ngay * 400;
        if(ngay > 12) 
        {
            tien = tien - tien * 10 / 100;
        }
        break;
    case 'B':
        cout << "Ban da chon phong loai B!" << endl;
        tien = ngay * 300;
        if(ngay > 12) 
        {
            tien = tien - tien * 8 / 100;
        }
        break;
    case 'C':
        cout << "Ban da chon phong loai C!" << endl;
        tien = ngay * 250;
        if(ngay > 12) 
        {
            tien = tien - tien * 8 / 100;
        }
        break;    
    default:
        cout << "Ban da nhap khong dung loai phong!";
        break;
    }
    cout << "Tien ban phai tra la: " << tien * 1000;
    return 0;
}
