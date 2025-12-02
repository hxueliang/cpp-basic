#include <iostream>
using namespace std;

int main()
{
  short s = 10;
  cout << "s = " << s << endl;
  s = 20;
  cout << "s = " << s << endl
       << endl;

  int i = 10;
  cout << "i = " << i << endl;
  i = 20;
  cout << "i = " << i << endl
       << endl;

  long l = 10;
  cout << "l = " << l << endl;
  l = 20;
  cout << "l = " << l << endl
       << endl;

  long long ll = 10;
  cout << "ll = " << ll << endl;
  ll = 20;
  cout << "ll = " << ll << endl
       << endl;

  float f = 3.14f;
  cout << "f = " << f << endl;
  f = 9.001002003004f;
  cout << "f = " << f << endl
       << endl;

  double d = 3.14;
  cout << "d = " << d << endl;
  d = 9.001002003004;
  cout << "d = " << d << endl
       << endl;

  char c = 'A';
  cout << "c = " << c << endl;
  c = 'B';
  cout << "c = " << c << endl
       << endl;

  bool b = true;
  cout << "b = " << b << endl;
  b = false;
  cout << "b = " << b << endl
       << endl;
  return 0;
}