#include<iostream>
using namespace std;
class temp
{
  private:
	int a;
   
  public:
	void set(int x)
	    {
	     a=x;
	    }
	void sum(temp o1,temp o2)
		{
		 a=o1.a+o2.a;
		}
		void print()
		{
		 cout<<"value of a"<<a<<endl;
		}
};
int main()
{
	temp o1,o2,o3;
	o1.set(50);
	o2.set(50);
	o3.sum(o1,o2);
	
	o1.print();
	o2.print();
	o3.print();
	return 0;
}