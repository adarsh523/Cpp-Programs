#include<iostream>
using namespace std;
class Complex
{
	private:
		int real,imag;
	public:
	    Complex(int r=0,int i=0)
		{
			real=r;
			imag=i;
		}
		//this is automatically called when "+" is used between 2 complex objects
		Complex operator+(Complex const &obj)
		{
			Complex res;
			res.real=(*this).real+obj.real;
			//c3.real=c1.real+c2.real;
			res.imag=(*this).imag+obj.imag;
			return res;
		}
		void print()
		{
			cout<<real<<"+i"<<imag;
		}
};
int main()
{
	Complex c1(10,5),c2(2,4);
	Complex c3=c1+c2;//this ois an example to call operator+.c2 is used to call
	c3.print();
	return 0;
}
