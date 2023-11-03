#include<iostream>
using namespace std;
class temp
{
   private:
   		int num1, num2;
   public:
   		temp(int n1, int n2) 
		{
      		num1 = n1;
      		num2 = n2;
   		}	
   		temp(const temp &n) 
	   	{
      		num1 = n.num1;
      		num2 = n.num2;
  		}
   		void display() 
		{
      		cout<<"num1 = "<< num1 <<endl;
      		cout<<"num2 = "<< num2 <<endl;
   		}
};
int main() 
{
   temp obj1(10, 20);
   temp obj2 = obj1;
   obj1.display();
   obj2.display();
   return 0;
}