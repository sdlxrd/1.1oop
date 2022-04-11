//Pay.cpp
////////////////////////////////////////////////////////////////
#include "Pay.h"
#include <iostream>

using namespace std;

void Pay::setfirst(double value)
{
    first = value;
}

void Pay::setsecond(unsigned int value)
{
    second = value;
}

bool Pay::Init(int x, int y)
{
    if (x >= 0 && y >= 0)
    {
        first = x;
        second = y;
        return true;
    }
    else {
        return false;
    }
}

void Pay::Display() const
{
    cout << "first = " << first << "     second = " << second << endl;
}

void Pay::Read()
{
    int x, y;
    cout << "first =  ";
    cin >> x;
    do
    {
        cout << "second = ";
        cin >> y;
    } while (!Init(x, y));
}

int Pay::summa(int n)
{
    
    double summa = first / second * n;
    cout << endl << "result = " << summa << endl;
    return summa;
};