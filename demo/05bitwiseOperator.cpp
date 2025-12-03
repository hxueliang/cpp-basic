#include <iostream>
using namespace std;

int main()
{
  int a = 10; // 0000 1010
  int b = 12; // 0000 1100

  cout << "a & b = " << (a & b) << endl;   // 0000 1000 => 8
  cout << "a | b = " << (a | b) << endl;   // 0000 1110 => 14
  cout << "a ^ b = " << (a ^ b) << endl;   // 0000 0110 => 6
  cout << "~a = " << (~a) << endl;         // 1111 0101 => -11
  cout << "a << 2 = " << (a << 2) << endl; // 0010 1000 => 40
  cout << "a >> 2 = " << (a >> 2) << endl; // 0000 0010 => 2

  return 0;
}