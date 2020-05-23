#include <iostream>
using namespace std;

class Complex
{
private:
    int real, imag;
public:
    Complex(int r = 0, int i =0)
    {  real = r;   imag = i; }
    friend ostream & operator << (ostream &out, const Complex &c);
    friend istream & operator >> (istream &in,  Complex &c);
};

ostream & operator << (ostream &out, const Complex &c)  //const is used to get the output in the same format everytime(only read operation).No change here in the output stream will change the result
{                                                       //out-object created in reference of outputstream(ostream)
    out << c.real;                                      //&-returns the address of the stream and helps to differentiate between the streams.It does not the value of the object
    out << "+i" << c.imag << endl;
    return out;
}

istream & operator >> (istream &in,  Complex &c)        //const is not used here because the input is being given here and everytime it may change(only write operation)
{
    cout << "Enter Real Part ";
    in >> c.real;
    cout << "Enter Imaginary Part ";
    in >> c.imag;
    return in;
}

int main()
{
   Complex c1;
   cin >> c1;
   cout << "The complex object is ";
   cout << c1;
   return 0;
}
