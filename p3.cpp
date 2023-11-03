#include <iostream>
using namespace std;

class Student
{
 public:
  string name;
  float spi;
};

int main()
{
  Student students[10];
  int highestSpi=0;
  for (int i=0;i<10;++i)
  {
    cout<<"Enter the name of student "<<i+1<<":";
    cin>>students[i].name;

    cout<<"Enter SPI for "<<students[i].name<<":";
    cin>>students[i].spi;

    if(students[i].spi>students[highestSpi].spi)
    {
      highestSpi=i;
    }
  }
    cout<<"Student with the highest SPI is::"<<students[highestSpi].name<<"with SPI"<<students[highestSpi].spi<<endl;

  return 0;
}