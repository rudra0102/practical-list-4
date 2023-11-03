#include<iostream>
using namespace std;
class Count
{
	static int count;
	
	public:
		static int i_count()
		{
			count++;
		}	
		 static int getcount()
		 {
		 	return count;
		 }
};
int Count :: count;
int main()
{
	Count::i_count();
	Count::i_count();
	Count::i_count();
	
	cout<<"Value of count is ::"<<Count::getcount()<<endl;
	
	return 0;
	
}