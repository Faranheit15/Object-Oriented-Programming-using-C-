#include<iostream>
using namespace std;
class Complex
{
	private:
		int real,img;
	public:
		Complex(int r=0,int i=0)
		{
			real=r;
			img=i;
		}
		Complex operator + (Complex const &obj)
		{
			Complex res;
			res.real=real+obj.real;
			res.img=img+obj.img;
			return res;
		}
		void print()
		{
			cout<<cout<<real<<"+i"<<img<<endl;
		}
};
int main()
{
	Complex c1(10,20), c2(4,5);
	Complex c3=c1+c2;
	c3.print();
}
