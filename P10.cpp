#include <iostream>
using namespace std;

int main() 
{
    int ngay;   
    int thang;
    int ngayt;
    int ngays;
    int thangt;
    int thangs;       
    cout << "Nhap so ngay: "; cin >> ngay;
    cout << "Nhap so thang: "; cin >> thang;
    switch (thang)
    {
        case 1:
            if (ngay >= 1 && ngay <= 31) 
            {
                cout << "Ngay va thang da nhap hop le!" << endl;
                cout << "Thang " << thang << " co 31 ngay!" << endl;
                if (ngay == 31) 
                {
                    ngayt = 30;
                    ngays = 1;
                    thangt = thang;
                    thangs = thang + 1;
                } 
                else if (ngay == 1) 
                {
                    ngayt = 31;
                    ngays = 2;
                    thangt = 12;
                    thangs = thang;
                } 
                else 
                {
                    ngayt = ngay - 1;
                    ngays = ngay + 1;
                    thangs = thang;
                    thangt = thang;
                }                
                cout << "Hom sau la ngay " << ngays << " thang " << thangs << endl;
                cout << "Hom truoc la ngay " << ngayt << " thang " << thangt << endl;
                break;
            }
            else 
            {
                cout << "Ngay va thang da nhap khong hop le!" << endl;
                break;
            }
        case 2:
            if (ngay >= 1 && ngay <= 28) 
            {
                cout << "Ngay va thang da nhap hop le!" << endl;
                cout << "Thang " << thang << " co 28 ngay!" << endl;
                if (ngay == 28) 
                {
                    ngayt = 27;
                    ngays = 1;
                    thangt = thang;
                    thangs = thang + 1;
                } 
                else if (ngay == 1) 
                {
                    ngayt = 31;
                    ngays = 2;
                    thangt = thang - 1;
                    thangs = thang;
                } 
                else 
                {
                    ngayt = ngay - 1;
                    ngays = ngay + 1;
                    thangs = thang;
                    thangt = thang;
                }                
                cout << "Hom sau la ngay " << ngays << " thang " << thangs << endl;
                cout << "Hom truoc la ngay " << ngayt << " thang " << thangt << endl;
                break;
            }
            else 
            {
                cout << "Ngay va thang da nhap khong hop le!" << endl;
                break;
            }
        case 3:
            if (ngay >= 1 && ngay <= 31) 
            {
                cout << "Ngay va thang da nhap hop le!" << endl;
                cout << "Thang " << thang << " co 31 ngay!" << endl;
                if (ngay == 31) 
                {
                    ngayt = 30;
                    ngays = 1;
                    thangt = thang;
                    thangs = thang + 1;
                } 
                else if (ngay == 1) 
                {
                    ngayt = 28;
                    ngays = 2;
                    thangt = thang - 1;
                    thangs = thang;
                } 
                else 
                {
                    ngayt = ngay - 1;
                    ngays = ngay + 1;
                    thangs = thang;
                    thangt = thang;
                }                
                cout << "Hom sau la ngay " << ngays << " thang " << thangs << endl;
                cout << "Hom truoc la ngay " << ngayt << " thang " << thangt << endl;
                break;
            }
            else 
            {
                cout << "Ngay va thang da nhap khong hop le!" << endl;
                break;
            }        
        case 5:
        case 7:
        case 8:
        case 10:
            if (ngay >= 1 && ngay <= 31) 
            {
                cout << "Ngay va thang da nhap hop le!" << endl;
                cout << "Thang " << thang << " co 31 ngay!" << endl;
                if (ngay == 31) 
                {
                    ngayt = 30;
                    ngays = 1;
                    thangt = thang;
                    thangs = thang + 1;
                } 
                else if (ngay == 1) 
                {
                    ngayt = 30;
                    ngays = 2;
                    thangt = thang - 1;
                    thangs = thang;
                } 
                else 
                {
                    ngayt = ngay - 1;
                    ngays = ngay + 1;
                    thangs = thang;
                    thangt = thang;
                }                
                cout << "Hom sau la ngay " << ngays << " thang " << thangs << endl;
                cout << "Hom truoc la ngay " << ngayt << " thang " << thangt << endl;
                break;
            }
            else 
            {
                cout << "Ngay va thang da nhap khong hop le!" << endl;
                break;
            }        
        case 4:
        case 6:
        case 9:
        case 11:
            if (ngay >= 1 && ngay <= 30) 
            {
                cout << "Ngay va thang da nhap hop le!" << endl;
                cout << "Thang " << thang << " co 30 ngay!" << endl;
                if (ngay == 30) 
                {
                    ngayt = 29;
                    ngays = 1;
                    thangt = thang;
                    thangs = thang + 1;
                } 
                else if (ngay == 1) 
                {
                    ngayt = 31;
                    ngays = 2;
                    thangt = thang - 1;
                    thangs = thang;
                } 
                else 
                {
                    ngayt = ngay - 1;
                    ngays = ngay + 1;
                    thangs = thang;
                    thangt = thang;
                }                
                cout << "Hom sau la ngay " << ngays << " thang " << thangs << endl;
                cout << "Hom truoc la ngay " << ngayt << " thang " << thangt << endl;
                break;
            }
            else 
            {
                cout << "Ngay va thang da nhap khong hop le!" << endl;
                break;
            }
        case 12:
            if (ngay >= 1 && ngay <= 31) 
            {
                cout << "Ngay va thang da nhap hop le!" << endl;
                cout << "Thang " << thang << " co 31 ngay!" << endl;
                if (ngay == 31) 
                {
                    ngayt = 30;
                    ngays = 1;
                    thangt = thang;
                    thangs = 1;
                } 
                else if (ngay == 1) 
                {
                    ngayt = 31;
                    ngays = 2;
                    thangt = thang - 1;
                    thangs = thang;
                } 
                else 
                {
                    ngayt = ngay - 1;
                    ngays = ngay + 1;
                    thangs = thang;
                    thangt = thang;
                }                
                cout << "Hom sau la ngay " << ngays << " thang " << thangs << endl;
                cout << "Hom truoc la ngay " << ngayt << " thang " << thangt << endl;
                break;
            }
        default:
            cout << "Thang khong hop le!" << endl;
            break;
    }
        return 0;
}