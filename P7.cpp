//Tính cước truy cập Internet, nhập vào thời gian bắt đầu và kết thúc truy cập, gồm số giờ và số phút, với cách tính như sau:
//Từ 7 giờ – 17 giờ: 100 đ/phút, giảm giá 10% nếu thời gian truy cập > 6h
//Từ 17 giờ – 24 giờ: 75 đ/phút, giảm giá 12% nếu thời gian truy cập > 4h
//Từ 0 giờ – 7 giờ: 50 đ/phút, giảm giá 15% nếu thời gian truy cập > 2h.

#include <iostream>
using namespace std;

int main() 
{
    float giobd;
    float giokt;
    int phutbd;
    int phutkt;
    float giohd = 0;
    float tien = 0;
    cout << "Nhap gio va phut bat dau!" << endl;
    cout << "Gio bat dau: "; cin >> giobd;
    cout << "Phut bat dau: "; cin >> phutbd;
    cout << "Nhap gio va phut ket thuc!" << endl;
    cout << "Gio ket thuc: "; cin >> giokt;
    cout << "Phut ket thuc: "; cin >> phutkt;
    cout << "Ban su dung internet tu " << giobd << " gio " << phutbd << " phut den " << giokt << " gio " << phutkt << " phut" << endl;
    giobd = giobd + (float)phutbd / 60;
    giokt = giokt + (float)phutkt / 60; 
    giohd = giokt - giobd;   
    if(giobd >= 7 && giobd < 17) 
    {
        if(giokt < 17 && giokt >= 7) 
        {
            if(giobd < giokt) 
            {
                tien = giohd * 60 * 100;
                if(giohd > 6) 
                {
                    tien = tien * 0.9;
                }            
            } 
            else if(giobd > giokt) 
            {
                giohd = 17 - giobd + giokt - 7 + 7 +7;
                if(17 - giobd + giokt - 7 > 6) 
                {
                    tien = 7 * 60 * 75 * 0.88 + 7 * 60 * 50 * 0.85 + (17 - giobd + giokt - 7 > 6) * 60 * 100 * 0.9;
                } 
                else tien = 7 * 60 * 75 * 0.88 + 7 * 60 * 50 * 0.85 + (17 - giobd + giokt - 7 > 6) * 60 * 100;
            } 
            else if(giokt = giobd) 
            {
                giohd = 24;
                tien = 10 * 60 * 100 * 0.9 + 7 * 60 * 75 * 0.88 + 7 * 60 * 50 * 0.85;
            }
        } 
        else if(giokt >= 17 && giokt < 24) 
        {
            int tien1 = 0;
            int tien2 = 0;
            if (17 - giobd > 6) 
            {
                tien1 = (100 * 60 * (17 - giobd)) * 0.9;
            } 
            else tien1 = 100 * 60 * (17 - giobd);
            if(giokt - 17 > 4) 
            {
                tien2 = (75 * 60 * (giokt - 17)) * 0.88;
            } else tien2 = 75 * 60 * (giokt - 17);
            tien = tien1 + tien2;
        } 
        else if(giokt >= 0 && giokt < 7) 
        {
            giohd = 24 - giobd + giokt;
            int tien1 = 0;
            int tien2 = 0;
            if (17 - giobd > 6) 
            {
                tien1 = (100 * 60 * (17 - giobd)) * 0.9;
            } 
            else tien1 = 100 * 60 * (17 - giobd);
            if(giokt > 2) 
            {
                tien2 = (50 * 60 * giokt) * 0.85;
            } 
            else tien2 = 50 * 60 * giokt;
            tien = tien1 + tien2 + 7 * 60 * 75 * 0.88; 
        }
    }

    if(giobd >= 17 && giobd < 24) 
    {
        if(giokt >= 17 && giokt < 24) 
        {
            if(giobd < giokt) 
            {
                tien = giohd * 60 * 75;
                if(giohd > 4) 
                {
                    tien = tien * 0.88;
                }         
            } 
            else if(giobd > giokt) 
            {
                giohd = giokt - 17 + 24 - giobd + 7 + 10;
                if(giokt - 17 + 24 - giobd > 4) 
                {
                    tien = 10 * 60 * 100 * 0.9 + 7 * 60 * 50 * 0.85 + (giokt - 17 + 24 - giobd) * 60 * 75 * 0.88;
                } 
                else tien = 10 * 60 * 100 * 0.9 + 7 * 60 * 50 * 0.85 + (giokt - 17 + 24 - giobd) * 60 * 75;
            } 
            else if(giokt = giobd) 
            {
                giohd = 24;
                tien = 10 * 60 * 100 * 0.9 + 7 * 60 * 75 * 0.88 + 7 * 60 * 50 * 0.85;
            }       
        } 
        else if(giokt >= 0 && giokt < 7) 
        {
            giohd = giokt + 24 - giobd;
            int tien1 = 0;
            int tien2 = 0;
            if (24 - giobd > 4) 
            {
                tien1 = (75 * 60 * (24 - giobd)) * 0.88;
            } 
            else tien1 = 75 * 60 * (24 - giobd);
            if(giokt > 2) 
            {
                tien2 = (50 * 60 * giokt) * 0.85;
            } 
            else tien2 = (50 * 60 * giokt);
            tien = tien1 + tien2;
        } 
        else if(giokt >= 7 && giokt < 17) 
        {
            giohd = 24 - giobd + giokt;
            int tien1 = 0;
            int tien2 = 0;
            if (24 - giobd > 4) 
            {
                tien1 = (75 * 60 * (24 - giobd)) * 0.88;
            } 
            else tien1 = 75 * 60 * (24 - giobd);
            if(giokt - 7 > 6) 
            {
                tien2 = (100 * 60 * (giokt - 7)) * 0.9;
            } 
            else tien2 = 100 * 60 * (giokt - 7);
            tien = tien1 + tien2 + 7 * 60 * 50 * 0.85; 
        }
    }

    if(giobd >= 0 && giobd < 7) 
    {
        if(giokt >= 0 && giokt < 7) 
        {
            if(giobd < giokt) 
            {
                tien = giohd * 60 * 50;
                if(giohd > 2) 
                {
                    tien = tien * 0.85;
                }      
            } 
            else if(giobd > giokt) 
            {
                giohd = 24 - giobd + giokt - 17 + 10 + 7;
                if(24 - giobd + giokt - 17 > 2) 
                {
                    tien = 10 * 60 * 100 * 0.9 + 7 * 60 * 75 * 0.88 + (24 - giobd + giokt - 17) * 60 * 50 * 0.85;
                } 
                else tien = 10 * 60 * 100 * 0.9 + 7 * 60 * 75 * 0.88 + (24 - giobd + giokt - 17) * 60 * 50;
            } 
            else if(giokt = giobd) 
            {
                giohd = 24;
                tien = 10 * 60 * 100 * 0.9 + 7 * 60 * 75 * 0.88 + 7 * 60 * 50 * 0.85;
            }
        } 
        else if(giokt >= 7 && giokt < 17) 
        {
            int tien1 = 0;
            int tien2 = 0;
            if (7 - giobd > 2) 
            {
                tien1 = (50 * 60 * (7 - giobd)) * 0.85;
            } 
            else tien1 = 50 * 60 * (7 - giobd);
            if(giokt - 7 > 6) 
            {
                tien2 = (100 * 60 * (giokt - 7)) * 0.9;
            } 
            else tien2 = 100 * 60 * (giokt - 7);
            tien = tien1 + tien2;
        } 
        else if(giokt >= 17 && giokt < 24) 
        {
            int tien1 = 0;
            int tien2 = 0;
            if (7 - giobd > 2) 
            {
                tien1 = (50 * 60 * (7 - giobd)) * 0.85;
            } 
            else tien1 = 50 * 60 * (7 - giobd);
            if(giokt - 17 > 4) 
            {
                tien2 = (75 * 60 * (giokt - 17)) * 0.88;
            } 
            else tien2 = 75 * 60 * (giokt - 17);
            tien = tien1 + tien2 + 10 * 60 * 100 * 0.9; 
        }
    }    
    cout << "Thoi gian ban su dung la: " << giohd << " gio " << endl;
    cout << "So tien phai tra la: " << tien << endl;
    return 0;
}
