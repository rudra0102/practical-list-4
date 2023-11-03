#include<iostream>
using namespace std;
class employee
{
	private:
		int emp_id;
		char emp_name[10];
	
	public:
	    void getdata()
		{
			cout<<"enter employee name ::";
		    cin>>emp_name;
		    
		    cout<<"enter employee id ::";
		    cin>>emp_id;
		}	
		void putdata()
		{
			cout<<"Employee name is ::"<<emp_name<<endl;
			cout<<"Employee id is ::"<<emp_id<<endl;
		}
};
  int main()
  {
  	int i;
	employee a[10];
	for(i=0;i<3;i++)
	 {
	 	a[i].getdata();
	 }
	  for(i=0;i<3;i++)
	  {
	  	a[i].putdata();
	  }
	   return 0;
  }