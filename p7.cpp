#include <iostream>

using namespace std;

class A {
public:
  int a;

  friend void printA(A &a) {
    cout << a.a;
  }
};

int main() {
  A a;
  a.a = 10;
  printA(a);
}