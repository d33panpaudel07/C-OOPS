#include <iostream>

using namespace std;

class Complex

{

private:

double real, imag;

public:

Complex() { }

Complex(double r, double i)
:
real(r),imag(i)
{
}

friend ostream& operator<<(ostream& output, Complex& obj);

friend istream& operator>>(istream& input, Complex& obj);

};

ostream& operator<<(ostream& output, Complex& obj)

{

output<<obj.real<< "," <<obj.imag;

return output;

}

istream& operator >>(istream& input, Complex& obj)

{

input >>obj.real>>obj.imag;

return input;

}

int main()

{

Complex obj1(2.5, 3.5);

Complex obj2(1.0, 4.6);

cout<<obj1<<endl<<obj2;

}
