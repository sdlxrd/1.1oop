//source.cpp
/////////////////////////////////////////////////////////////////////////
#include <iostream>
#include "Pay.h"

using namespace std;

Pay makePay(int x, int y)
{
    Pay p;
    if (!p.Init(x, y))
        cout << "wrong argument Init!" << endl;
    return p;
}

int main()
{
    Pay p;

    p.Read();
    cout << endl;
    p.Display();
    int n;
    cout << "n = "; cin >> n;
    p.summa(n);
    return 0;
}