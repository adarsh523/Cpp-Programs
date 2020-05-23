#include<iostream>
using namespace std;
class A
{
	private:
		int a;
	public:
		A()
		{
			a=9;
		}
		friend class B;
};
class B
{
	private:
		int b;
	public:
		void show(A &x)
		{
			cout<<"A::a="<<x.a;
		}
};
int main()
{
	A a;
	B b;
	b.show(a);
	return 0;
}
