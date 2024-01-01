#include<iostream>
using namespace std;

class Complex
{
public:
    int real,img;

    Complex(int x=0,int y=0)
    {
        real=x;
        img=y;
    }

    Complex operator+(Complex y)
    {
        Complex temp(0,0);
        temp.real=real+y.real;
        temp.img=img+y.img;
        return temp;
    }
    Complex operator*(Complex y)
    {
        Complex temp(0,0);
        temp.real=real*y.real-img*y.img;
        temp.img=img*y.real+real*y.img;
        return temp;
    }
};

void operator >>(istream &in, Complex &c)
{
    in >> c.real;
    in >> c.img;
}
void operator <<(ostream &out, Complex &c)
{
    out << c.real;
    if (c.img>0)
    {
    out << "+" << c.img <<"i ";
    }
    else
    {
        out << c.img <<"i ";
    }
}

int main()
{
    int x;
    Complex c1,c2,c3;
    cout<< "Enter Real and imganary part of 1st number:";
    cin >> c1;
    cout<< "Enter Real and imganary part of 2nd number::";
    cin >> c2;
    cout << "Which Operation (1 = + , 2 = *): ";
	cin >> x;

	if (x == 1)
    {
	c3 = c1 + c2;
    cout << "Addition is:\n";
	cout << c1;
	cout << " + ";
	cout << c2;
	cout << " = ";
	cout << c3;
	}
    else
    {
    c3 = c1*c2;
    cout << "Multiplication is:\n";
	cout << c1;
	cout << " * ";
	cout << c2;
	cout << " = ";
	cout << c3;
	}
}