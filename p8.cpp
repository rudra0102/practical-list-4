#include<iostream>
using namespace std;
class x
{
	private :
		int std_id;
		string name;
	public :
		void get_data()
		{
			cout<<"Enter student id::";
			cin>>std_id;
			cin.ignore();
			cout<<"Enter student Name::";
			getline(cin,name);
			
			
		}
	friend class y;		
};
class y
{
	public :
		void put_data(x& x1)
		{
			cout<<"student id is"<<x1.std_id<<endl;
			cout<<"student name is"<<x1.name<<endl;
		}
};
int main()
{
	x x1;
	x1.get_data();
	
	y y1;
	y1.put_data(x1);
	
	return 0;
}