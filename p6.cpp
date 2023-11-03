#include <iostream>
using namespace std;

class Product 
{
  public:
	int Man_year;
	int Exp_year;

  Product(int Man_year, int Exp_year): 
  Man_year(Man_year), Exp_year(Exp_year) 
	{
	}
   int getDifference() 
  {
    return Exp_year - Man_year;
  }
};

void printDifference(Product product) {
  cout<<"The difference between manufacture year and expiry year is:"<<product.getDifference()<<endl;
}

int main() 
{
  Product product(2023, 2025);
  printDifference(product);

  return 0;
}