#include <iostream>
using namespace std;

int main()
{
  int a = 10;
  int &ra = a;
  ra = 20;
  cout << "a = " << a << endl; // a = 20
  return 0;
}