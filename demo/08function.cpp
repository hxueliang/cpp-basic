#include <iostream>
using namespace std;

int add(int a, int b)
{
  return a + b;
}

void fun()
{
  cout << "Hello, Fun!" << endl;
}

int main()
{
  cout << add(1, 2) << endl;
  fun();
  return 0;
}