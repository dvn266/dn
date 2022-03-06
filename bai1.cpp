#include<iostream>
using namespace std;
struct Phansoooooo{
    int tu;
    int mau;
};
void nhap(Phanso &A) {
    cin >> A.tu;
    cin >> A.mau;
}
int UCLN(int x, int y)
{
    x = abs(x);
    y = abs(y);
    while (x * y != 0)
    {
        if (x > y)
        {
            x = x % y;
        }
        else
        {
            y = y % x;
        }
    }
    return x + y;
}
void rutgon(Phanso& ps)
{
    int c = UCLN(ps.tu, ps.mau);
    ps.tu /= c;
    ps.mau /= c;
}
void xuat(Phanso ps) {
    if (ps.mau < -1) cout << "Phan so vua nhap la: " << ps.tu * -1 << "/" << ps.mau * -1 << endl;
    else if (ps.mau == -1) cout << "Phan so vua nhap la: " << ps.tu * -1 << endl;
    else if (ps.mau == 0) cout << "Phan so vua nhap khong ton tai." << endl;
    else if (ps.mau == 1) cout << "Phan so vua nhap la: " << ps.tu << endl;
    else if (ps.mau > 1) cout << "Phan so vua nhap la: " << ps.tu << "/" << ps.mau << endl;
}
int main() {
    Phanso A;
    nhap(A);
    rutgon(A);
    xuat(A);
    return 0;
}