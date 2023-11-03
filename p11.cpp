#include <iostream>
using namespace std;
class Param_a 
{
	private:
		int b, c;
	public:
		Param_a(int b1, int c1)
		{
			b = b1;
			c = c1;
		}
		int getX()
		{
			return b;
		}
		int getY()
		{
			return c;
		}
};
int main ()
{
	Param_a p1(10, 15);
	cout<<"p1.b="<<p1.getX();
	cout<<"p1.c="<<p1.getY();
return 0;
}