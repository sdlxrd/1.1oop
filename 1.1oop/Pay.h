//Pay.h
////////////////////////////////////////////////////////////
#pragma once
class Pay
{
private:
    double first;
    int unsigned second;
public:
    double getfirst() const { return first; };
    int unsigned getsecond() const { return second; };
    void setfirst(double value);
    void setsecond(unsigned int value);

    bool Init(int x, int y);
    void Display() const;
    void Read();

    int summa(int n);

};