#include <iostream>
using namespace std;

int main() 
{
    char x;
    cout << "Nhap vao mot chu cai: "; cin >> x;
    if(x >= 'a' && x <= 'z') 
    {
        cout << "Ban vua nhap vao mot chu cai thuong!" << endl;
        cout << "Chu cai in hoa la: " << (char)(x - 32) << endl;
    } 
    else if(x >= 'A' && x <= 'Z') 
    {
        cout << "Ban vua nhap vao mot chu cai in hoa!" << endl;
        cout << "Chu cai thuong la: " << (char)(x + 32) << endl;
    }
    else cout << "Ban chua nhap dung cu phap, moi ban chay lai!" << endl;
    return 0;
}