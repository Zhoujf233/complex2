//
//  main.cpp
//  complex2
//
//  Created by fengsh on 2019/8/7.
//  Copyright © 2019 fengsh. All rights reserved.
//

#include <iostream>
using namespace std;
class Complex
{
public:
    Complex(){real = 0;imag = 0;}
    Complex(double r){real = r;imag = 0;}
    Complex(double r,double i){real = r;imag = i;}
    //operator double(){return real;}
    friend Complex operator +(Complex c1,Complex c2);
    void display();
private:
    double real;
    double imag;
};

Complex operator + (Complex c1,Complex c2)
{
    return Complex(c1.real + c2.real,c2.imag + c2.imag);
}

void Complex::display()
{
    cout <<"("<<real<<"+"<<imag<<"i)"<<endl;
}

int main(int argc, const char * argv[])
{
    Complex c1(3,4),c2(5,-10),c3;
    c3 = c1 +2.5;
    c3.display();
    return 0;
}
