#include<iostream>
using namespace std;
class temp
{
	public:
		int a;
		void add(temp o2)
		{
			a=a+o2.a;
		}
};
int main()
{
	temp o1, o2;
	o1.a=50;
	o2.a=100;
	
	cout<<"Enter the value of o1::"<<endl;
	cout<<"Enter the value of o2::"<<endl;
	
	o2.add(o1);
	
	cout<<"after sum::"<<o2.a<<endl;
	
	return 0;
}