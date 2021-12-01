//Nhập vào 1 số nguyên, in ra màn hình cách đọc số nguyên đó.
//Ví dụ với số 543, cách đọc là: Nam Bon Ba

#include <iostream>
using namespace std;

int main() {
    int N;
    int a = 0;
    int b = 0;
    int c = 0;
    cout << "Nhap vao so nguyen N co ba chu so: "; cin >> N;
    a = N / 100;
    b = (N - a * 100) / 10;
    c = (N - a * 100 - b * 10);
    switch (a) 
    {
    case 1:
        cout << "Mot" << " ";
        break;
    case 2:
        cout << "Hai" << " ";
        break;
    case 3:
        cout << "Ba" << " ";
        break;
    case 4:
        cout << "Bon" << " ";
        break;
    case 5:
        cout << "Nam" << " ";
        break;
    case 6:
        cout << "Sau" << " ";
        break;
    case 7:
        cout << "Bay" << " ";
        break;
    case 8:
        cout << "Tam" << " ";
        break;
    case 9:
        cout << "Chin" << " ";
        break;
    }
    
    switch (b) 
    {
    case 1:
        cout << "Mot" << " ";
        break;
    case 2:
        cout << "Hai" << " ";
        break;
    case 3:
        cout << "Ba" << " ";
        break;
    case 4:
        cout << "Bon" << " ";
        break;
    case 5:
        cout << "Nam" << " ";
        break;
    case 6:
        cout << "Sau" << " ";
        break;
    case 7:
        cout << "Bay" << " ";
        break;
    case 8:
        cout << "Tam" << " ";
        break;
    case 9:
        cout << "Chin" << " ";
        break;
    case 0:
        cout << "Khong" << " ";
        break;
    }

    switch (c) 
    {
    case 1:
        cout << "Mot" << " ";
        break;
    case 2:
        cout << "Hai" << " ";
        break;
    case 3:
        cout << "Ba" << " ";
        break;
    case 4:
        cout << "Bon" << " ";
        break;
    case 5:
        cout << "Nam" << " ";
        break;
    case 6:
        cout << "Sau" << " ";
        break;
    case 7:
        cout << "Bay" << " ";
        break;
    case 8:
        cout << "Tam" << " ";
        break;
    case 9:
        cout << "Chin" << " ";
        break;
    case 0:
        cout << "Khong" << " ";
        break;
    }
    return 0;
}
