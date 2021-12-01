//Nhập vào một tháng, cho biết tháng đó thuộc mùa nào trong năm, thông báo nếu tháng nhập vào không hợp lệ.

#include <iostream>
using namespace std;

int main() 
{
    int thang;
    cout << "Nhap vao so thang: "; cin >> thang;
    switch (thang)
    {
    case 1:
    case 2:
    case 3:
        cout << "Day la mua xuan!";      
        break;
    case 4:
    case 5:
    case 6:
        cout << "Day la mua ha!";      
        break;
    case 7:
    case 8:
    case 9:
        cout << "Day la mua thu!";      
        break;
    case 10:
    case 11:
    case 12:
        cout << "Day la mua dong!";      
        break;
    
    default:
    cout << "Ban da nhap sai so thang!";
        break;
    }
    return 0;
}
