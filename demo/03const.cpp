#include <iostream>
using namespace std;

int main()
{
  const int a = 10;
  // a = 20; // error
  cout << a << endl;

  const float PI = 3.14;
  int r = 2;
  cout << PI * r * r << endl;

  return 0;
}